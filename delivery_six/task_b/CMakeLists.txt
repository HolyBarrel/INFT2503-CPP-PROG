cmake_minimum_required(VERSION 3.5)

project(web_server)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -pthread")

add_executable(web_server main.cpp)
