from setuptools import find_packages
from setuptools import setup

setup(
    name='mbot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('mbot_interfaces', 'mbot_interfaces.*')),
)
