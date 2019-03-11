cmake_minimum_required(VERSION 3.13)
project(untitled)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp Chassis.cpp Chassis.h Vehicle.cpp Vehicle.h Wheel.cpp Wheel.h)

add_executable(test2 ${SOURCE_FILES})