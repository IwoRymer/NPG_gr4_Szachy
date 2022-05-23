#include "../include/Piece.hpp"


#include <iostream>

bool Piece::move(const Position& newPosition, Piece* (&board)[8][8] ) {

    if(this->isValidMove(newPosition, board)){
        this->position_ = newPosition;

        // ERROR - SEG FAULT
        // board[newPosition.yPos][newPosition.xPos] użcyie tego daje sqg fault
        board[newPosition.yPos][newPosition.xPos] = this;
        return true;
    }
    return false;
}




// Może sie przyda - smieci z konsolowej wersji

// sprawdzone dziala, sprwadza czy pomiedzy ruchem w lini znajdują sie jakieś figury
// nie sprawdza czy zbija figure
/*
bool Piece::colllisonInLine(const Position &newPos) const{
    int dX = this->getPosition().xPos != newPos.xPos;
    int start, end;
    if (dX){
        start = this->getPosition().xPos < newPos.xPos ? this->getPosition().xPos : newPos.xPos;
        end = (start == newPos.xPos ? this->getPosition().xPos : newPos.xPos);
        for(start; start != end - 1; ++start){
            if(chessBoard[newPos.yPos][start] != '-')
                return true;
        }
    }
    else{
        start = this->getPosition().yPos < newPos.yPos ? this->getPosition().yPos : newPos.yPos;
        end = (start == newPos.yPos ? this->getPosition().yPos : newPos.yPos);
        for(start; start != end - 1; ++start){
            if(chessBoard[start][newPos.xPos] != '-')
                return true;
        }
    }
    return false;
}

bool Piece::collisonInDiagonal(const Position &newPos) const {
    return false;
}
*/