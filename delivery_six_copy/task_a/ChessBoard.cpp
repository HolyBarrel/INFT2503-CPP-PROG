#include "ChessBoard.h"


//Implementations for the nested class Piece of containing class ChessBoard
ChessBoard::Piece::Piece(Color color) : color(color) {}

string ChessBoard::Piece::color_string() const {
    if (color == Color::WHITE)
    return "white";
    else
    return "black";
}

string ChessBoard::Piece::get_board_name(std::string piece_abbr)
{
    return std::string(1, color_string()[0]) + piece_abbr + " | "; 
}
    
    
ChessBoard::King::King(Color color) : Piece(color) {
    current_x = 0;
    current_y = 0;
    range = 1;
    name = "king";
    abbr = "Ki";
}

string ChessBoard::King::type() const
{
    return color_string() + " " +  name;
}

bool ChessBoard::King::valid_move(int from_x, int from_y, int to_x, int to_y) const
{
    int dy = abs(to_y - from_y);
    int dx = abs(to_x - from_x);

    if(dy == 0 && dx == 0) return false;

    return 
    (dy == range && dx == range) ||
    (dy == range && dx == 0) ||
    (dy == 0 && dx == range);
}

string ChessBoard::King::show() 
{
    return get_board_name(abbr);
}


ChessBoard::Knight::Knight(Color color) : Piece(color) {
    current_x = 0;
    current_y = 0;
    range = 2;
    name = "knight";
    abbr = "Kn";
}

string ChessBoard::Knight::type() const
{
    return color_string() + " " +  name;
}

bool ChessBoard::Knight::valid_move(int from_x, int from_y, int to_x, int to_y) const
{
    int dy = abs(to_y - from_y);
    int dx = abs(to_x - from_x);

    if(dy == 0 || dx == 0) return false;

    return 
    (dy == range && dx == 1) || 
    (dy == 1 && dx == range);
}

string ChessBoard::Knight::show()
{
    return get_board_name(abbr);
}

ChessBoard::ChessBoard() {
    squares.resize(8);
    for (auto &square_column : squares)
      square_column.resize(8);
}

vector<vector<unique_ptr<ChessBoard::Piece>>> squares;

bool ChessBoard::move_piece(const std::string &from, const std::string &to) {
    int from_x = from[0] - 'a';
    int from_y = stoi(string() + from[1]) - 1;
    int to_x = to[0] - 'a';
    int to_y = stoi(string() + to[1]) - 1;

    auto &piece_from = squares[from_x][from_y];
    if (piece_from) {
      if (piece_from->valid_move(from_x, from_y, to_x, to_y)) {
        valid_move_event(*piece_from, from, to);
        auto &piece_to = squares[to_x][to_y];
        if (piece_to) {
          if (piece_from->color != piece_to->color) {
            valid_move_event(*piece_from, from, to);
            if (auto king = dynamic_cast<King *>(piece_to.get()))
              lost_game_event(*king);
          } else {
            invalid_move_event(*piece_from, from, to);
            return false;
          }
        }
        piece_to = move(piece_from);
        print_board_event();

        return true;
      } else {
        invalid_move_event(*piece_from, from, to);
        return false;
      }
    } else {
      piece_not_present_event(from);
      return false;
    }
}
