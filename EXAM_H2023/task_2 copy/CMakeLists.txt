cmake_minimum_required(VERSION 3.5)

project(task_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -pthread -lpthread")

add_executable(task_2 main.cpp)

