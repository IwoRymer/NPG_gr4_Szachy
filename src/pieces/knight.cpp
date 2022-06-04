#include "../../include/pieces/knight.hpp"

Knight::Knight(int x, int y, Color c): Piece(x, y , c){
    path_ = (this->getColor() == Color::white ? pathWKnight : pathBKnight);
}

bool Knight::isValidMove(const Position& newPosition, Piece* (&board)[8][8]) const {
    Position relPosition = newPosition - this->getPosition();

    // chcecking if newposition is "L"
        if (abs(relPosition.xPos) == 2 && abs(relPosition.yPos) == 1)
            return true;
        if (abs(relPosition.xPos) == 1 && abs(relPosition.yPos) == 2)
            return true;
    return false;
}

