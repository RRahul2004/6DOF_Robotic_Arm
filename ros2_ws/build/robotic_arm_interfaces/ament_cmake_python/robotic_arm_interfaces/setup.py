from setuptools import find_packages
from setuptools import setup

setup(
    name='robotic_arm_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('robotic_arm_interfaces', 'robotic_arm_interfaces.*')),
)
