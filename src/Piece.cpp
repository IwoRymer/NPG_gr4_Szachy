#include "../include/Piece.hpp"

bool Piece::move(const Position& newPosition, Piece* (&board)[8][8] ) {


    Position relPos = newPosition - this->getPosition();
    std::cout << "relPos[" << relPos.yPos << "][" << relPos.xPos << "]" << std::endl;

    if(this->isValidMove(newPosition, board)){
        this->position_ = newPosition;
        board[newPosition.yPos][newPosition.xPos] = this;
        this->pieceMoved();
        return true;
    }
    return false;
}