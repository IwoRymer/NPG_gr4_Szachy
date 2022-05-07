#include "../../include/pieces/knight.hpp"

Knight::Knight(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
    path_ = (this->getColor() == white ? "../graphics/Chess_nlt60.png" : "../graphics/Chess_ndt60.png");
}

// TODO
bool Knight::isValidMove(const Knight &knight, const Position &newPosition){
    // jesli sie nie zmieni pozycja
    if(knight.getPosition() == newPosition){ return false;}
    // jak zmieni sie x i y
    if (knight.getPosition().xPos != newPosition.xPos && knight.getPosition().yPos != newPosition.yPos)
        return false;
    return true;
}

// TODO
bool Knight::move(const Position &position){
    if (!isValidMove(*this, position)){ return false;}
    //if (colllisonInLine())
    return false;
}