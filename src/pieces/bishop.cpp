#include "../../include/pieces/bishop.hpp"

Bishop::Bishop(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
    path_ = (this->getColor() == white ? "../graphics/Chess_qlt60.png" : "../graphics/Chess_qdt60.png");
}

// TODO
bool Bishop::isValidMove(const Bishop &bishop, const Position &newPosition){
    // jesli sie nie zmieni pozycja
    if(bishop.getPosition() == newPosition){ return false;}
    // jak zmieni sie x i y
    if (bishop.getPosition().xPos != newPosition.xPos && bishop.getPosition().yPos != newPosition.yPos)
        return false;
    return true;
}

// TODO
bool Bishop::move(const Position &position){
    if (!isValidMove(*this, position)){ return false;}
    //if (colllisonInLine())
    return false;
}