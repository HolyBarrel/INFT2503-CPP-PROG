#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <functional>

using namespace std;

//Class header file for the ChessBoard class and indirectly also for the Piece, King and Knight nested classes
class ChessBoard 
{
public:
  enum class Color { WHITE,
                     BLACK };
   class Piece {
    public:
     Piece(Color color);
     virtual ~Piece() {}

     Color color;
     string color_string() const;

     virtual string type() const = 0;

     virtual bool valid_move(int from_x, int from_y, int to_x, int to_y) const = 0;

     virtual string show() = 0;

     string get_board_name(std::string piece_abbr);
    
   };

   class King : public Piece {
    public: 
      
      King(Color color);

      string type() const;

      bool valid_move(int from_x, int from_y, int to_x, int to_y) const;

      string show() override;

    private: 
      int current_x;
      int current_y;
      int range;
      string name;
      string abbr;
   };

  class Knight : public Piece {
    public: 
      
      Knight(Color color);

      string type() const;

      bool valid_move(int from_x, int from_y, int to_x, int to_y) const;

      string show() override;

    private: 
      int current_x;
      int current_y;
      int range;
      string name;
      string abbr;
   };

  ChessBoard();

  vector<vector<unique_ptr<Piece>>> squares;

  //Possible events for a game of chess: 

  function<void(const Piece &piece, const string &from, const string &to)> valid_move_event;
  function<void(const Piece &piece, const string &from, const string &to)> invalid_move_event;

  function<void(const Piece &piece)> lost_game_event;

  //TODO: ADD win
  function<void(const string &from)> piece_not_present_event;

  function<void()> print_board_event;

  bool move_piece(const std::string &from, const std::string &to);
};

#endif