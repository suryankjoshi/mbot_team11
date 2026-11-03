#!/usr/bin/env python3
"""Log /cmd_vel and /odom (optionally /gyrodom) to a CSV, then auto-plot on Ctrl+C.

Terminal 1:  python3 logger_node.py --label ff_only
Terminal 2:  python3 step_cmd_test.py
Then Ctrl+C terminal 1 -> logs/ff_only.csv, logs/ff_only_step.png, logs/ff_only_xy.png

Use a different --label for every run (ff_only, pid_only, ffpid_v1, ...).
"""
import argparse
import csv
import math
import os
import time

import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry

import step_analysis


def yaw_from_quat(q):
    return math.atan2(2.0 * (q.w * q.z + q.x * q.y),
                      1.0 - 2.0 * (q.y * q.y + q.z * q.z))


class Logger(Node):
    def __init__(self, path, gyrodom=False):
        super().__init__('logger')
        self.path = path
        self.f = open(path, 'w', newline='')
        self.w = csv.writer(self.f)
        self.w.writerow(['t', 'src', 'x', 'y', 'theta', 'vx', 'wz'])
        self.t0 = time.time()

        self.create_subscription(Twist, '/cmd_vel', self.on_cmd, 10)
        self.create_subscription(Odometry, '/odom',
                                 lambda m: self.on_odom('odom', m), 10)
        if gyrodom:  # for Task 1.3; check the type with: ros2 topic info /gyrodom
            self.create_subscription(Odometry, '/gyrodom',
                                     lambda m: self.on_odom('gyrodom', m), 10)

    def on_cmd(self, m):
        self.w.writerow([time.time() - self.t0, 'cmd', 0, 0, 0,
                         m.linear.x, m.angular.z])

    def on_odom(self, src, m):
        p = m.pose.pose.position
        self.w.writerow([time.time() - self.t0, src, p.x, p.y,
                         yaw_from_quat(m.pose.pose.orientation),
                         m.twist.twist.linear.x, m.twist.twist.angular.z])

    def close(self):
        if not self.f.closed:
            self.f.close()
        return self.path


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--label', default='run', help='name for this run, e.g. ff_only')
    ap.add_argument('--outdir', default='logs')
    ap.add_argument('--gyrodom', action='store_true', help='also log /gyrodom')
    a = ap.parse_args()

    os.makedirs(a.outdir, exist_ok=True)
    path = os.path.join(a.outdir, f'{a.label}.csv')
    if os.path.exists(path):  # never overwrite an earlier run
        path = os.path.join(a.outdir, f'{a.label}_{time.strftime("%H%M%S")}.csv')

    rclpy.init()
    node = Logger(path, a.gyrodom)
    print(f'Logging to {path} - run step_cmd_test.py, then press Ctrl+C here.')
    try:
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        path = node.close()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

    step_analysis.analyze_single(path, a.label)


if __name__ == '__main__':
    main()