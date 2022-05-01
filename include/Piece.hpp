#ifndef CHESS_PIECE_HPP
#define CHESS_PIECE_HPP

#include <vector>

#include "globalVariables.h"


class Piece{
public:
    // first x, y cordinate
    Piece(int x, int y, Color c): position_(x, y), color_{c} {}

    virtual bool move(const Position &position) = 0;

    void changePosition(Position pos){ position_ = pos;}
    // Getters
    Position getPosition() const{ return position_;}
    int getXPosition() const{ return position_.xPos;}
    int getYPosition() const{ return position_.yPos;}

    char getSymbol() const{ return symbol_;}
    Color getColor() const{ return color_;}
    std::string getPath() const{ return path_;}

    virtual bool isKing() const { return false;}

    virtual ~Piece() = default;

private:
    Position position_;
    Color color_;
protected:
    char symbol_;
    std::string path_;
};


#endif //CHESS_PIECE_HPP
