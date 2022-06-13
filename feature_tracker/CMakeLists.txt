cmake_minimum_required(VERSION 3.0.2)
project(feature_tracker)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "-std=c++11")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall -g")

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

find_package(OpenCV REQUIRED)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES feature_tracker
#  CATKIN_DEPENDS roscpp
#  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(feature_tracker
  src/feature_tracker_node.cpp
  src/parameters.cpp
)

target_link_libraries(feature_tracker ${catkin_LIBRARIES} ${OpenCV_LIBS})
