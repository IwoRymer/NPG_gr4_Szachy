#include "../../include/pieces/king.hpp"

King::King(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
    path_ = (this->getColor() == white ? "../graphics/Chess_klt60.png" : "../graphics/Chess_kdt60.png");
}

// TODO
bool King::isValidMove(const King &king, const Position &newPosition){
    // jesli sie nie zmieni pozycja
    if(king.getPosition() == newPosition){ return false;}
    // jak zmieni sie x i y
    if (king.getPosition().xPos != newPosition.xPos && king.getPosition().yPos != newPosition.yPos)
        return false;
    return true;
}

// TODO
bool King::move(const Position &position){
    if (!isValidMove(*this, position)){ return false;}
    //if (colllisonInLine())
    return false;
}