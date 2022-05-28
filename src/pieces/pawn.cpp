#include "../../include/pieces/pawn.hpp"

Pawn::Pawn(int x, int y, Color c): Piece(x, y , c), hasMoved(0){
    path_ = (this->getColor() == Color::white ? "../graphics/Chess_plt60.png" : "../graphics/Chess_pdt60.png");
}


bool Pawn::isValidMove(const Position& newPosition, Piece* (&board)[8][8]) const {
    Position relPosition = newPosition - this->getPosition();
    if (hasMoved == 0)
    {
        if (this->getColor == 0) {
            // TODO: Nie wiem który kolor z której strony Tutaj za³o¿e ¿e 0 jest na dole w wierszu 0

            if (relPosition == Position(0, 2)) {
                if (board[this->getYPosition + 1][this->getXPosition] != nullptr || board[this->getYPosition + 2][this->getXPosition] != nullptr)
                    return false
                    return true
            }
            if (relPosition == Position(0, 1)) {
                if (board[this->getYPosition + 1][this->getXPosition] != nullptr)
                    return false
                    return true
            }
        }
        else {
            // TODO: Nie wiem który kolor z której strony Tutaj za³o¿e ¿e 0 jest na dole w wierszu 0

            if (relPosition == Position(0, -2)) {
                if (board[this->getYPosition - 1][this->getXPosition] != nullptr || board[this->getYPosition + -][this->getXPosition] != nullptr)
                    return false
                    return true
            }
            if (relPosition == Position(0, -1)) {
                if (board[this->getYPosition - 1][this->getXPosition] = nullptr)
                    return false
                    return true
            }
        }
    
    }
    else {
        if (this->getColor == 0) {
            if (relPosition == Position(0, 1)) {
                if (board[this->getYPosition + 1][this->getXPosition] != nullptr)
                    return false
                    return true
            }
        }
        else {
            if (relPosition == Position(0, -1)) {
                if (board[this->getYPosition - 1][this->getXPosition] = nullptr)
                    return false
                    return true
            }
        }
    }
    return false 
}

