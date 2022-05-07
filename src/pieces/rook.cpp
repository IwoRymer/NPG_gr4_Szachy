#include "../../include/pieces/rook.hpp"

Rook::Rook(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
    path_ = (this->getColor() == white ? "../graphics/Chess_rlt60.png" : "../graphics/Chess_rdt60.png");
}

// TODO
bool Rook::isValidMove(const Position & newPosition, const Piece**& board){
// jesli sie nie zmieni pozycja
if(this->getPosition() == newPosition){ return false;}
// jak zmieni sie x i y
if (this->getPosition().xPos != newPosition.xPos && this->getPosition().yPos != newPosition.yPos){return false;}
Position relPosition = newPosition - this->getPosition();
for(const Piece*& pieceadd : board)


return true;
};

// TODO
/**
 * move
*/



