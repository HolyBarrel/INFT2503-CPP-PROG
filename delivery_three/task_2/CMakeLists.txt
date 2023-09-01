cmake_minimum_required(VERSION 3.5)

project(oop_t_2)

# Compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

# Source files to build executable
add_executable(oop_t_2 main.cpp Circle.cpp)
