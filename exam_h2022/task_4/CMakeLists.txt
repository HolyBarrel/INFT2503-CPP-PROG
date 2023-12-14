cmake_minimum_required(VERSION 3.5)

project(task_test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(task_test main.cpp)

