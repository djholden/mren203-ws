from setuptools import find_packages, setup

package_name = 'motor_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dj',
    maintainer_email='dj.holden@queensu.ca',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'motor_driver = motor_control.motor_control_node:main',
            'tf_node = motor_control.transform_node:main' 
        ],
    },
)
