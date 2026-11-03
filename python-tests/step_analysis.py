#!/usr/bin/env python3
"""Step-response analysis + plotting for ROB550 Botlab Checkpoint 1.2.

Pure python (numpy + matplotlib), no ROS needed, so you can also run it on a
laptop after copying the CSVs off the robot.

Usage (compare runs, e.g. FF-only vs tuned):
    python3 step_analysis.py logs/ff_only.csv logs/tuned.csv \
        --labels "FF only" "FF+PID (tuned)" --out logs/compare_step.png
"""
import argparse
import csv

import numpy as np
import matplotlib
matplotlib.use('Agg')  # headless: just write PNG files
import matplotlib.pyplot as plt

# column indices of the arrays returned by load()
T, X, Y, TH, VX, WZ = range(6)


def load(path):
    """Return {src: Nx6 array [t, x, y, theta, vx, wz]} for every src in the CSV."""
    data = {}
    with open(path, newline='') as f:
        for r in csv.DictReader(f):
            data.setdefault(r['src'], []).append([
                float(r['t']), float(r['x']), float(r['y']),
                float(r.get('theta') or 'nan'),  # older CSVs have no theta column
                float(r['vx']), float(r['wz'])])
    return {k: np.array(v) for k, v in data.items()}


def find_step(cmd, col):
    """(t_start, t_end, target) of the first non-zero command in column `col`."""
    nz = np.where(np.abs(cmd[:, col]) > 1e-6)[0]
    if len(nz) == 0:
        return None
    i0 = nz[0]
    back_to_zero = np.where(np.abs(cmd[i0:, col]) <= 1e-6)[0]
    t_end = cmd[i0 + back_to_zero[0], T] if len(back_to_zero) else cmd[-1, T]
    return cmd[i0, T], t_end, cmd[i0, col]


def step_metrics(odom, t0, t_end, target, col):
    """Rise time (10-90%), overshoot, settling time (+-5%), steady-state error."""
    m = (odom[:, T] >= t0) & (odom[:, T] <= t_end)
    tt = odom[m, T] - t0
    sgn = np.sign(target)
    yy = odom[m, col] * sgn          # make the step positive
    tgt = abs(target)

    def first_cross(frac):
        i = np.where(yy >= frac * tgt)[0]
        return tt[i[0]] if len(i) else np.nan

    t10, t90 = first_cross(0.1), first_cross(0.9)
    outside = np.where(np.abs(yy - tgt) > 0.05 * tgt)[0]
    if len(outside) == 0:
        settle = 0.0
    elif outside[-1] == len(yy) - 1:
        settle = np.nan              # never settled inside the window
    else:
        settle = tt[outside[-1] + 1]
    tail = yy[tt >= tt[-1] - 1.0]    # last second of the step
    return {
        'target': target,
        'delay_10pct_s': t10,
        'rise_10_90_s': t90 - t10,
        'overshoot_pct': max(0.0, (yy.max() - tgt) / tgt * 100),
        'settle_5pct_s': settle,
        'ss_mean': tail.mean() * sgn,
        'ss_error_pct': (tgt - tail.mean()) / tgt * 100,
        'ss_std': tail.std(),
    }


def print_metrics(rows):
    keys = ['target', 'delay_10pct_s', 'rise_10_90_s', 'overshoot_pct',
            'settle_5pct_s', 'ss_mean', 'ss_error_pct', 'ss_std']
    print(f"{'run':<22}" + ''.join(f'{k:>16}' for k in keys))
    for lab, mt in rows:
        print(f'{lab:<22}' + ''.join(f'{mt[k]:>16.4f}' for k in keys))


def plot_steps(runs, labels, out_png, title='Step response'):
    """Row 1: vx for the forward step. Row 2: wz for the first rotation step."""
    fig, axs = plt.subplots(2, 1, figsize=(9, 7.5))
    rows = []
    for k, (d, lab) in enumerate(zip(runs, labels)):
        cmd, odom = d['cmd'], d['odom']
        for ax, col, name in ((axs[0], VX, 'vx'), (axs[1], WZ, 'wz')):
            st = find_step(cmd, col)
            if st is None:
                continue
            t0, t_end, tgt = st
            if k == 0:  # draw the commanded step once, from the first run
                c = cmd[(cmd[:, T] >= t0 - 0.5) & (cmd[:, T] <= t_end + 1.0)]
                ax.step(c[:, T] - t0, c[:, col], where='post', color='k',
                        ls='--', lw=1.2, label='commanded')
            o = odom[(odom[:, T] >= t0 - 0.5) & (odom[:, T] <= t_end + 1.0)]
            ax.plot(o[:, T] - t0, o[:, col], lw=1.6, label=f'{lab} (odom)')
            if name == 'vx':
                rows.append((lab, step_metrics(odom, t0, t_end, tgt, col)))
    axs[0].set_ylabel('linear velocity vx [m/s]')
    axs[1].set_ylabel('angular velocity wz [rad/s]')
    for ax in axs:
        ax.set_xlabel('time since step command [s]')
        ax.grid(alpha=0.3)
        ax.legend(loc='best')
    axs[0].set_title(title)
    fig.tight_layout()
    fig.savefig(out_png, dpi=150)
    plt.close(fig)
    return rows


def plot_xy(d, out_png, title='Odometry path'):
    """(x, y) path for every pose-like source in the CSV (odom, gyrodom, ...)."""
    fig, ax = plt.subplots(figsize=(6, 6))
    for src, a in d.items():
        if src == 'cmd':
            continue
        ax.plot(a[:, X], a[:, Y], lw=1.4, label=src)
    ax.set_aspect('equal')
    ax.set_xlabel('x [m]')
    ax.set_ylabel('y [m]')
    ax.grid(alpha=0.3)
    ax.legend()
    ax.set_title(title)
    fig.tight_layout()
    fig.savefig(out_png, dpi=150)
    plt.close(fig)


def analyze_single(csv_path, label=None):
    """Called by logger_node.py on Ctrl+C: write <csv>_step.png / _xy.png."""
    base = csv_path[:-4] if csv_path.endswith('.csv') else csv_path
    label = label or base.split('/')[-1]
    d = load(csv_path)
    if 'cmd' not in d or 'odom' not in d:
        print('No cmd/odom data recorded - nothing to plot.')
        return
    if find_step(d['cmd'], VX) is None and find_step(d['cmd'], WZ) is None:
        print('No non-zero /cmd_vel seen - did step_cmd_test.py run?')
    rows = plot_steps([d], [label], base + '_step.png', f'Step response: {label}')
    plot_xy(d, base + '_xy.png', f'Odometry path: {label}')
    if rows:
        print_metrics(rows)
    print(f'Saved {base}_step.png and {base}_xy.png')


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('csvs', nargs='+')
    ap.add_argument('--labels', nargs='*')
    ap.add_argument('--out', default='step_compare.png')
    a = ap.parse_args()
    labels = a.labels if a.labels and len(a.labels) == len(a.csvs) else a.csvs
    runs = [load(p) for p in a.csvs]
    rows = plot_steps(runs, labels, a.out, 'Step response comparison')
    print_metrics(rows)
    print(f'Saved {a.out}')


if __name__ == '__main__':
    main()
