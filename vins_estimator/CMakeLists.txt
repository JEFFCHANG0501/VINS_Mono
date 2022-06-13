cmake_minimum_required(VERSION 3.0.2)
project(vins_estimator)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES vins_estimator
#  CATKIN_DEPENDS roscpp
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)
