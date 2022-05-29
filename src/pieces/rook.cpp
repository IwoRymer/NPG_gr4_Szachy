#include "../../include/pieces/rook.hpp"



Rook::Rook(int x, int y, Color c): Piece(x, y , c){
    path_ = (this->getColor() == Color::white ? "../graphics/Chess_rlt60.png" : "../graphics/Chess_rdt60.png");
}

// TODO
bool Rook::isValidMove(const Position & newPosition, Piece* (&board)[8][8]) const{
    // jesli sie nie zmieni pozycja -> sprawdzane w mainLoop

    // jak zmieni sie x i y
    if (this->getPosition().xPos != newPosition.xPos && this->getPosition().yPos != newPosition.yPos)
        return false;

    Position relPosition = newPosition - this->getPosition();
    /**
     * Blok kodu sprawdza przypadki czy
     * 1) w której linii znajduje się nowa pozycja w odniesieniu do pionka
     * 2) czy w tej linnii nie znajduje się inny pionek zaczynając od pola obok this* kończąc na polu newPosition
     */


    if(relPosition.xp()){
        std::cout << "----xp-----" << std::endl;

        for(int i = 1; i < relPosition.yPos; i++){
            std::cout << "Petla sie wykonuje\n";
            std::cout << "board[" << (this->getPosition() + Position(i, 0)).yPos;
            std::cout << "][" << (this->getPosition() + Position(i, i)).xPos << "]\n";

            if(board[(this->getPosition() + Position(i, 0)).yPos][(this->getPosition() + Position(i, i)).xPos] != nullptr)
                return false;
        }
    }

    if(relPosition.xm()){
        std::cout << "----xm-----" << std::endl;

            for(int i = -1; i > relPosition.yPos; i--){
                std::cout << "Petla sie wykonuje\n";
                std::cout << "board[" << (this->getPosition() + Position(i, 0)).yPos;
                std::cout << "][" << (this->getPosition() + Position(i, i)).xPos << "]\n";
                if(board[(this->getPosition() + Position(i, 0)).yPos][(this->getPosition() + Position(i, i)).xPos] != nullptr)
                    return false;
            }
        }

    if(relPosition.yp()){
        std::cout << "----yp-----" << std::endl;

            for(int i = 1; i < relPosition.xPos; i++){
                std::cout << "Petla sie wykonuje\n";
                std::cout << "board[" << (this->getPosition() + Position(0, i)).yPos;
                std::cout << "][" << (this->getPosition() + Position(i, i)).xPos << "]\n";

                if(board[(this->getPosition() + Position(0, i)).yPos][(this->getPosition() + Position(i, i)).xPos] != nullptr)
                    return false;
            }
        }

    if(relPosition.ym()){
        std::cout << "----ym-----" << std::endl;

            for(int i = -1; i > relPosition.xPos; i--){
                std::cout << "Petla sie wykonuje\n";
                std::cout << "board[" << (this->getPosition() + Position(0, i)).yPos;
                std::cout << "][" << (this->getPosition() + Position(i, i)).xPos << "]\n";

                if(board[(this->getPosition() + Position(0, i)).yPos][(this->getPosition() + Position(i, i)).xPos] != nullptr)
                    return false;
            }
        }
    return true;
}


