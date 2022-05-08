#include "../../include/pieces/bishop.hpp"

Bishop::Bishop(int x, int y, Color c): Piece(x, y , c){
    symbol_ = (this->getColor() == white ? 'r' : 'R');
    path_ = (this->getColor() == white ? "../graphics/Chess_qlt60.png" : "../graphics/Chess_qdt60.png");
}

// TODO

bool Bishop::isValidMove(const Position & newPosition, Piece***& board) const{
// jesli sie nie zmieni pozycja
    if(this->getPosition() == newPosition){ return false;}
// jak zmieni sie x i y
    if (newPosition.xPos - this->getPosition().xPos == newPosition.yPos - this->getPosition().yPos){return false;}

    Position relPosition = newPosition - this->getPosition();
/**
 * Blok kodu sprawdza przypadki czy
 * 1) w której ćwiartce znajduje się nowa pozycja w odniesieniu do pionka
 * 2) czy w tej skośnej linnii nie znajduje się inny pionek zaczynając od pola obok this* kończąc na polu newPosition
 */


    if(relPosition.q1()){
        for(int i = 1; i < relPosition.yPos; i++){
            if(board[(this->getPosition() + Position(i, i)).yPos][(this->getPosition() + Position(i, i)).xPos] != std::nullptr_t())
                return false;}
    }
    if(relPosition.q2()){
        for(int i = 1; i < relPosition.yPos; i++){
            if(board[(this->getPosition() + Position(-i, i)).yPos][(this->getPosition() + Position(i, i)).xPos] != std::nullptr_t())
                return false;}
    }
    if(relPosition.q3()){
        for(int i = -1; i > relPosition.yPos; i--){
            if(board[(this->getPosition() + Position(i, i)).yPos][(this->getPosition() + Position(i, i)).xPos] != std::nullptr_t())
                return false;}
    }
    if(relPosition.q4()){
        for(int i = -1; i > relPosition.yPos; i--){
            if(board[(this->getPosition() + Position(-i, i)).yPos][(this->getPosition() + Position(i, i)).xPos] != std::nullptr_t())
                return false;}
    }





    return true;
};