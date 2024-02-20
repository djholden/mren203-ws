#! /bin/bash

# Source ROS2
source /opt/ros/humble/setup.bash

# Build Packages
RMW_IMPLEMENTATION=rmw_cyclonedds_cpp colcon build --symlink-install

