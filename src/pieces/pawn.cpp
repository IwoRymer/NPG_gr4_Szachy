#include "../../include/pieces/pawn.hpp"

Pawn::Pawn(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
    path_ = (this->getColor() == white ? "../graphics/Chess_plt60.png" : "../graphics/Chess_pdt60.png");
}

// TODO
bool Pawn::isValidMove(const Pawn &pawn, const Position &newPosition){
    // jesli sie nie zmieni pozycja
    if(pawn.getPosition() == newPosition){ return false;}
    // jak zmieni sie x i y
    if (pawn.getPosition().xPos != newPosition.xPos && pawn.getPosition().yPos != newPosition.yPos)
        return false;
    return true;
}

// TODO
bool Pawn::move(const Position &position){
    if (!isValidMove(*this, position)){ return false;}
    //if (colllisonInLine())
    return false;
}