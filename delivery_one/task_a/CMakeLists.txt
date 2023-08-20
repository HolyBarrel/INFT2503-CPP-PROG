cmake_minimum_required(VERSION 3.5)

project(temperatures)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(temperatures main.cpp)
