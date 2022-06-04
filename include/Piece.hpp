#ifndef CHESS_PIECE_HPP
#define CHESS_PIECE_HPP

#include <vector>

#include "globalVariables.h"


class Piece{
public:
    Piece(int x, int y, Color c): position_(x, y), color_{c} {};

    bool move(const Position &newPosition, Piece* (&board)[8][8]);

    // Getters
    Position getPosition() const{ return position_;}
    int getXPosition() const{ return position_.xPos;}
    int getYPosition() const{ return position_.yPos;}

    Color getColor() const{ return color_;}

    // Path - scieżka do pliku .png
    std::string getPath() const{ return path_;}

    //TODO - usunąć
    //void changePath(const std::string &s){path_ = s; }

    virtual bool isValidMove(const Position & newPosition, Piece* (&board)[8][8]) const = 0;

    void pieceMoved(){hasMoved = true;};
    bool hadMoved() const {return  hasMoved;}

    //virtual bool isKing() const { return false;}

    virtual ~Piece() = default;

private:
    Position position_;
    Color color_;
    bool hasMoved = false;

protected: // by można zmieniać w klasach pochodnych
    std::string path_;
};

#endif //CHESS_PIECE_HPP
