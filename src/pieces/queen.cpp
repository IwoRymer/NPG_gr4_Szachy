#include "../../include/pieces/queen.hpp"

Queen::Queen(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
    path_ = (this->getColor() == white ? "../graphics/Chess_qlt60.png" : "../graphics/Chess_qdt60.png");
}

// TODO
bool Queen::isValidMove(const Queen &queen, const Position &newPosition){
    // jesli sie nie zmieni pozycja
    if(queen.getPosition() == newPosition){ return false;}
    // jak zmieni sie x i y
    if (queen.getPosition().xPos != newPosition.xPos && queen.getPosition().yPos != newPosition.yPos)
        return false;
    return true;
}

// TODO
bool Queen::move(const Position &position){
    if (!isValidMove(*this, position)){ return false;}
    //if (colllisonInLine())
    return false;
}