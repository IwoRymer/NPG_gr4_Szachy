#include "../include/Piece.hpp"

bool Piece::move(const Position& newPosition, Piece* (&board)[8][8] ) {

    if(this->isValidMove(newPosition, board)){
        this->position_ = newPosition;
        board[newPosition.yPos][newPosition.xPos] = this;
        return true;
    }
    return false;
}