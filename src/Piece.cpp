#include "../include/Piece.hpp"

// sprawdzone dziala, sprwadza czy pomiedzy ruchem w lini znajdują sie jakieś figury
// nie sprawdza czy zbija figure
bool Piece::colllisonInLine(char (&board)[8][8] , const Position &newPos) const{
    int dX = this->getPosition().xPos != newPos.xPos;
    int start, end;
    if (dX){
        start = this->getPosition().xPos < newPos.xPos ? this->getPosition().xPos : newPos.xPos;
        end = (start == newPos.xPos ? this->getPosition().xPos : newPos.xPos);
        for(start; start != end - 1; ++start){
            if(board[newPos.yPos][start] != '-')
                return true;
        }
    }
    else{
        start = this->getPosition().yPos < newPos.yPos ? this->getPosition().yPos : newPos.yPos;
        end = (start == newPos.yPos ? this->getPosition().yPos : newPos.yPos);
        for(start; start != end - 1; ++start){
            if(board[start][newPos.xPos] != '-')
                return true;
        }
    }
    return false;
}