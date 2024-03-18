from setuptools import find_packages
from setuptools import setup

setup(
    name='steve_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('steve_msgs', 'steve_msgs.*')),
)
