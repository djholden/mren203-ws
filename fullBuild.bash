#! /bin/bash

# Source ROS2
source /opt/ros/humble/setup.bash

# Remove build files for clean install
rm -rf install build logs 

# Build Packages
RMW_IMPLEMENTATION=rmw_cyclonedds_cpp colcon build --symlink-install


