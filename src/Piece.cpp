#include "../include/Piece.hpp"

bool Piece::colllisonInLine(const std::vector<Piece*> &vec, const Position &newPos) const{
    int dX = this->getPosition().xPos - newPos.xPos;
    int dY = this->getPosition().yPos - newPos.yPos;

}