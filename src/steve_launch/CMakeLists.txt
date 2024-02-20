cmake_minimum_required(VERSION 3.8)
project(steve_launch)

add_compile_options(-std=c++17)
find_package(ament_cmake REQUIRED)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
