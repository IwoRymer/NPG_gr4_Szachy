#include "../include/Piece.hpp"


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

// TODO
bool Piece::collisonInDiagonal(const Position &newPos) const {
    return false;
}
*/
