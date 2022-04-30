#ifndef CHESS_PIECE_HPP
#define CHESS_PIECE_HPP

#include <vector>

#include "globalVariables.h"


class Piece{
public:
    // first x, y cordinate
    Piece(int x, int y, Color c): position_(x, y), color_{c} {}

    virtual bool move(const Position &position) = 0;

    // Getters
    Position getPosition() const{ return position_;}
    char getSymbol() const{ return symbol_;}
    Color getColor() const{ return color_;}

    virtual bool isKing() const { return false;}

    virtual ~Piece() = default;

    // zwraca true gdy jest kolizja
    bool colllisonInLine(const Position &newPos) const;
    bool collisonInDiagonal(const Position &newPos) const;
private:
    Position position_;
    Color color_;
protected:
    char symbol_;
};


#endif //CHESS_PIECE_HPP
