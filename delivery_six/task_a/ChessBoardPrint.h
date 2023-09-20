#ifndef CHESS_BOARD_PRINT_H
#define CHESS_BOARD_PRINT_H

#include <iostream>
#include "ChessBoard.h"
#include <functional>
using namespace std;

class ChessBoardPrint 
{
public: 
  ChessBoardPrint(ChessBoard& board) : board(board) {
    //Definitions on how the board events should be printed. 
       //Makes for better scalability in case of change to other graphical representation medium
    board.valid_move_event = [](const ChessBoard::Piece &piece, const string &from, const string &to) {
      cout << piece.type() << " is moving from " << from << " to " << to << endl;
    };

    board.invalid_move_event = [](const ChessBoard::Piece &piece, const string &from, const string &to) {
      cout << "can not move " << piece.type() << " from " << from << " to " << to << endl;
    };

    board.lost_game_event = [](const ChessBoard::Piece &piece) {
      cout << piece.type() << " lost the game of chess." << endl;
    };

    board.piece_not_present_event = [](const string &from) {
      cout << "no piece at " << from << endl;
    };

    board.print_board_event = [this]() {
      this->printBoard();
    };

  } 

  void printBoard()
  {
    cout << "|-----------------------------------------------|" << endl;

      for (auto &square_column : board.squares)
      {
        cout << "| ";
        for (auto &piece: square_column)
        {
            if(piece)
            {
              cout << piece->show();
            }
            else {
              cout << "    | ";
            }
        }
        cout << "" << endl << "|-----------------------------------------------|" << endl;
      }
  }

  //Additional messages for the user: 

  function<void()> initial_message = [](){
    cout << endl << "The game is initiated, with initial board positons: " << endl;
  };

  function<void()> invalid_moves_message = [](){
    cout << "Invalid moves:" << endl;
  };

  function<void()> starting_game_message = [](){
    cout << endl << "The game is starting... following are the moves made:" << endl;
  };

  function<void()> finished_game_message = [](){
   cout << endl << "The game finished, this is the final state of the board:" << endl;
  };


private: 
  ChessBoard& board;

};


#endif