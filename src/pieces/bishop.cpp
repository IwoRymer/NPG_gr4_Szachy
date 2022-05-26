#include "../../include/pieces/bishop.hpp"

#include <iostream>

Bishop::Bishop(int x, int y, Color c): Piece(x, y , c){
    path_ = (this->getColor() == Color::white ? "../graphics/Chess_blt60.png" : "../graphics/Chess_bdt60.png");
}

// TODO

bool Bishop::isValidMove(const Position & newPosition, Piece* (&board)[8][8]) const{
// czy pozcyja się nie zmieni sprawdzane w mainLoop

// jak zmieni sie x i y, BLOKUJE RUCHY POPRAWne
    //if (newPosition.xPos - this->getPosition().xPos != newPosition.yPos - this->getPosition().yPos){return false;}

    // TODO
    // Napisać funkcje czy goniec porusza się po diagonali

    Position relPosition = newPosition - this->getPosition();
/**
 * Blok kodu sprawdza przypadki czy
 * 1) w której ćwiartce znajduje się nowa pozycja w odniesieniu do pionka
 * 2) czy w tej skośnej linnii nie znajduje się inny pionek zaczynając od pola obok this* kończąc na polu newPosition
 */


    if(relPosition.q1()){
        std::cout << "----Q1-----" << std::endl;

        for(int i = 1; i < relPosition.yPos; i++){

            std::cout << "board[" << (this->getPosition() + Position(i, i)).yPos;
            std::cout << "][" << (this->getPosition() + Position(i, i)).xPos << "]\n";

            if(board[(this->getPosition() + Position(i, i)).yPos][(this->getPosition() + Position(i, i)).xPos] !=
                    nullptr)
                return false;
        }
    }


    if(relPosition.q2()){
        std::cout << "----Q2-----" << std::endl;

        for(int i = 1; i < relPosition.yPos; i++){

            std::cout << "board[" << (this->getPosition() + Position(-i, i)).yPos;
            std::cout << "][" << (this->getPosition() + Position(i, i)).xPos << "]\n";

            if(board[(this->getPosition() + Position(-i, i)).yPos][(this->getPosition() + Position(i, i)).xPos] !=
                    nullptr)
                return false;
        }
    }

    if(relPosition.q3()){
        std::cout << "----Q3-----" << std::endl;

        for(int i = -1; i > relPosition.yPos; i--){

            std::cout << "board[" << (this->getPosition() + Position(i, i)).yPos;
            std::cout << "][" << (this->getPosition() + Position(i, i)).xPos << "]\n";

            if(board[(this->getPosition() + Position(i, i)).yPos][(this->getPosition() + Position(i, i)).xPos] !=
                    nullptr)
                return false;
        }
    }

    if(relPosition.q4()){
        std::cout << "----Q4-----" << std::endl;

        for(int i = -1; i > relPosition.yPos; i--){

            std::cout << "board[" << (this->getPosition() + Position(-i, i)).yPos;
            std::cout << "][" << (this->getPosition() + Position(-i, i)).xPos << "]\n";

            if(board[(this->getPosition() + Position(-i, i)).yPos][(this->getPosition() + Position(-i, i)).xPos] !=
                    nullptr)
                return false;
        }
    }
    return true;
};