from setuptools import find_packages, setup

package_name = 'testing'

setup(
    name=package_name,
    version='3.0.0',
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
            'test_joint_state = testing.joint_states_test:main'
        ],
    },
)
