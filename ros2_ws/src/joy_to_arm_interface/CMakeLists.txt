cmake_minimum_required(VERSION 3.8)
project(joy_to_arm_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(robotic_arm_interfaces REQUIRED)

add_executable(ps4_control_node src/ps4_control_node.cpp)

ament_target_dependencies(ps4_control_node rclcpp sensor_msgs robotic_arm_interfaces)

install(TARGETS
  ps4_control_node
  DESTINATION lib/${PROJECT_NAME})
ament_package()
