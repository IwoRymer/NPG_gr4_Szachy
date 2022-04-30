#include "../../include/pieces/Rook.hpp"

Rook::Rook(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
}