#include "../../include/pieces/pawn.hpp"

Pawn::Pawn(int x, int y, Color c): Piece(x, y , c){
    path_ = (this->getColor() == Color::white ? "../graphics/Chess_plt60.png" : "../graphics/Chess_pdt60.png");
}

bool Pawn::isValidMove(const Position& newPosition, Piece* (&board)[8][8]) const {
    Position relPosition = newPosition - this->getPosition();
    if(board[newPosition.yPos][newPosition.yPos] == nullptr) {
        // Move without destroying basics
        if (relPosition.xPos != 0) { return false; }
        if (abs(relPosition.yPos) > 2) { return false; }
        // Move without destroying details
        if (this->getColor() == Color::black)
        {
            if(board[this->getYPosition() + 1][this->getXPosition()] != nullptr){return false; }
            //just checking
            std::cout<<this->hadMoved()<<std::endl;
            if(this->hadMoved() != 0 && relPosition.yPos == 2 ){ return false; }
        }else
        {
            if(board[this->getYPosition() - 1][this->getXPosition()] != nullptr){return false; }
            //checking
            std::cout<<this->hadMoved()<<std::endl;
            if(this->hadMoved() != 0 && relPosition.yPos == -2 ){ return false; }
        }
    }else{
        std::cout<<"destroying protocol XD"<<std::endl;
        //destroying dependent on color
        if (this->getColor() == Color::black)
        {
            if(relPosition != Position(1,1) && relPosition != Position(-1,1)) {return false;}
        }else{
            if(relPosition != Position(1,-1) && relPosition != Position(-1,-1)) {return false;}
        }
    }
    return true;
}


