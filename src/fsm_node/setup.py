from setuptools import find_packages, setup

package_name = 'fsm_node'

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
    maintainer='benjaminsyer',
    maintainer_email='benjaminsyer@todo.todo',
    description='Package description',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'fsm_node = fsm_node.fsm_node:main'
        ],
    },
)
