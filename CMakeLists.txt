cmake_minimum_required(VERSION 3.17)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)


find_package(OpenSceneGraph 3.6.5 REQUIRED osgViewer osgDB osgUtil)
# libOpenThreads & libosg automatically searched
include_directories(${OPENSCENEGRAPH_INCLUDE_DIRS})

add_executable(untitled2 main.cpp)
target_link_libraries(untitled2 ${OPENSCENEGRAPH_LIBRARIES})