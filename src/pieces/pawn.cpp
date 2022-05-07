#include "../../include/pieces/pawn.hpp"

Pawn::Pawn(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
    path_ = (this->getColor() == white ? "../graphics/Chess_plt60.png" : "../graphics/Chess_pdt60.png");
}


