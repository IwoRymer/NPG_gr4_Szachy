#include "../../include/pieces/rook.hpp"

Rook::Rook(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
    path_ = (this->getColor() == white ? "../graphics/Chess_rlt60.png" : "../graphics/Chess_rdt60.png");
}

// TODO
bool Rook::isValidMove(const Position & newPosition, Piece* (&board)[8][8]) const{
// jesli sie nie zmieni pozycja
if(this->getPosition() == newPosition){ return false;}
// jak zmieni sie x i y
if (this->getPosition().xPos != newPosition.xPos && this->getPosition().yPos != newPosition.yPos){return false;}

Position relPosition = newPosition - this->getPosition();
/**
 * Blok kodu sprawdza przypadki czy
 * 1) w której linii znajduje się nowa pozycja w odniesieniu do pionka
 * 2) czy w tej linnii nie znajduje się inny pionek zaczynając od pola obok this* kończąc na polu newPosition
 */


if(relPosition.xp()){
    for(int i = 1; i < relPosition.yPos; i++){
        if(board[(this->getPosition() + Position(i, 0)).yPos][(this->getPosition() + Position(i, i)).xPos] != std::nullptr_t())
            return false;}
}
if(relPosition.xm()){
        for(int i = -1; i > relPosition.yPos; i--){
            if(board[(this->getPosition() + Position(i, 0)).yPos][(this->getPosition() + Position(i, i)).xPos] != std::nullptr_t())
                return false;}
    }

if(relPosition.yp()){
        for(int i = 1; i < relPosition.xPos; i++){
            if(board[(this->getPosition() + Position(0, i)).yPos][(this->getPosition() + Position(i, i)).xPos] != std::nullptr_t())
                return false;}
    }
if(relPosition.ym()){
        for(int i = -1; i > relPosition.xPos; i--){
            if(board[(this->getPosition() + Position(0, i)).yPos][(this->getPosition() + Position(i, i)).xPos] != std::nullptr_t())
                return false;}
    }




return true;
};

// TODO
/**
 * move
*/



