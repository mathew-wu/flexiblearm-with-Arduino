cmake_minimum_required(VERSION 2.8.3)
project(motordriver)


find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs geometry_msgs)

 generate_messages(DEPENDENCIES std_msgs)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES motordriver
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable( chatter src/motor_driver_subscriber_node.cpp)
target_link_libraries(chatter ${catkin_LIBRARIES})
add_dependencies(chatter motordriver_generate_messages_cpp)

