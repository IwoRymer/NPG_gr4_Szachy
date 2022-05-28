#include "../../include/pieces/pawn.hpp"

Pawn::Pawn(int x, int y, Color c): Piece(x, y , c), hasMoved(0){
    path_ = (this->getColor() == Color::white ? "../graphics/Chess_plt60.png" : "../graphics/Chess_pdt60.png");
}


bool Pawn::isValidMove(const Position& newPosition, Piece* (&board)[8][8]) const {
    if (hasMoved == 0)
    {

    }

}

