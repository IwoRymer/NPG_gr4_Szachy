#ifndef CHESS_ROOK_HPP
#define CHESS_ROOK_HPP

#include "../Piece.hpp"

class Rook : public Piece{
    // konstruktor
    Rook(int x, int y, Color c);

    Color getColor() const override{ return color_;}

    //static bool isValidMove(const Rook &rook);
private:
    Position position_;
    Color color_;
    char symbol_;
};



#endif //CHESS_ROOK_HPP
