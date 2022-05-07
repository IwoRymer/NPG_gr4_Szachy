#ifndef CHESS_PIECE_HPP
#define CHESS_PIECE_HPP

#include <vector>

#include "globalVariables.h"


class Piece{
public:
    // first x, y cordinate
    Piece(int x, int y, Color c): position_(x, y), color_{c} {}

    virtual bool move(const Position &position) = 0;

    //void changePosition(Position pos){ position_ = pos;}

    // Getters
    Position getPosition() const{ return position_;}
    int getXPosition() const{ return position_.xPos;}
    int getYPosition() const{ return position_.yPos;}

    char getSymbol() const{ return symbol_;}
    Color getColor() const{ return color_;}

    // Path - scieżka do pliku .png
    std::string getPath() const{ return path_;}

    //TODO - usunąć
    void changePath(const std::string &s){path_ = s; }

    virtual bool isValidMove(const Position & newPosition, const Piece**& board) = 0;

    virtual bool isKing() const { return false;}

    virtual ~Piece() = default;

private:
    Position position_;
    Color color_;

protected: // by można zmieniać w klasach pochodnych
    char symbol_;
    std::string path_;
};


#endif //CHESS_PIECE_HPP
