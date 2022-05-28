#include "../../include/pieces/knight.hpp"

Knight::Knight(int x, int y, Color c): Piece(x, y , c){

    path_ = (this->getColor() == Color::white ? "../graphics/Chess_nlt60.png" : "../graphics/Chess_ndt60.png");
}

bool Knight::isValidMove(const Position& newPosition, Piece* (&board)[8][8]) const {
    Position relPosition = newPosition - this->getPosition();
    if (board[newPosition.yPos()][newPosition.xPos()] != nullptr)
    {
        if (relPosition == Position(2, 1))
            return true;
        if (relPosition == Position(-2, 1))
            return true;
        if (relPosition == Position(2, -1))
            return true;
        if (relPosition == Position(-2, -1))
            return true;
        if (relPosition == Position(1, 2))
            return true;
        if (relPosition == Position(-1, 2))
            return true;
        if (relPosition == Position(1, -2))
            return true;
        if (relPosition == Position(-1, -2))
            return true;
    }
    return false;
}


// TODO

