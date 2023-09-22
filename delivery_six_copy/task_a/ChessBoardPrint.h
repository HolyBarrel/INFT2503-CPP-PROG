#ifndef CHESS_BOARD_PRINT_H
#define CHESS_BOARD_PRINT_H

#include <iostream>
#include "ChessBoard.h"
#include <functional>
using namespace std;

class ChessBoardPrint 
{
public: 
  ChessBoardPrint(ChessBoard& board);

  void printBoard();

  //Additional messages for the user: 
  function<void()> initial_message;
  function<void()> invalid_moves_message;
  function<void()> starting_game_message;
  function<void()> finished_game_message;

private: 
  ChessBoard& board;
};

#endif