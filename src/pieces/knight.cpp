#include "../../include/pieces/knight.hpp"

Knight::Knight(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
    path_ = (this->getColor() == white ? "../graphics/Chess_nlt60.png" : "../graphics/Chess_ndt60.png");
}

// TODO

