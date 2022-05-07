#include "../../include/pieces/queen.hpp"

Queen::Queen(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
    path_ = (this->getColor() == white ? "../graphics/Chess_qlt60.png" : "../graphics/Chess_qdt60.png");
}

