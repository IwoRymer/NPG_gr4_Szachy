#include "../../include/pieces/king.hpp"

King::King(int x, int y, Color c): Piece(x, y , c){
    path_ = (this->getColor() == Color::white ? "../graphics/Chess_klt60.png" : "../graphics/Chess_kdt60.png");
}

// TODO

bool King::isValidMove(const Position & newPosition, Piece* (&board)[8][8]) const{
// jesli sie nie zmieni pozycja -> sprawdzane w mainLoop

// jak zmieni sie x i y
    Position relPosition = newPosition - this->getPosition();
    if (abs(relPosition.yPos) > 1 || abs(relPosition.xPos) > 1){return false;}
//czy na miejscu jest obiekt
    if(board[newPosition.yPos][newPosition.xPos] != nullptr){return false;};

    return true;
};