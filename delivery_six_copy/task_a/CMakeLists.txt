cmake_minimum_required(VERSION 3.5)

project(chess_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(chess_2 main.cpp ChessBoard.cpp ChessBoardPrint.cpp)
