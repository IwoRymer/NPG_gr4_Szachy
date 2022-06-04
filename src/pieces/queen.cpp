#include "../../include/pieces/queen.hpp"

Queen::Queen(int x, int y, Color c): Piece(x, y , c){
    path_ = (this->getColor() == Color::white ? "../graphics/Chess_qlt60.png" : "../graphics/Chess_qdt60.png");
}

bool Queen::isValidMove(const Position & newPosition, Piece* (&board)[8][8]) const{
// jesli sie nie zmieni pozycja -> sprawdzane w mainLoop

// jak zmieni sie x i y
    Position relPosition = newPosition - this->getPosition();

    if(abs(relPosition.yPos) != abs(relPosition.xPos) && relPosition.xPos != 0 && relPosition.yPos != 0)
        return false;
/**
 * Blok kodu sprawdza przypadki czy
 * 1) w której linii znajduje się nowa pozycja w odniesieniu do pionka
 * 2) czy w tej linnii nie znajduje się inny pionek zaczynając od pola obok this* kończąc na polu newPosition
 */

    //From rook class
    if(relPosition.xp()){
        std::cout << "----xp-----" << std::endl;

        for(int i = 1; i < relPosition.xPos; i++){
            std::cout << "Petla sie wykonuje\n";
            std::cout << "board[" << (this->getPosition()).yPos;
            std::cout << "][" << (this->getPosition() + Position(i, 0)).xPos << "]\n";

            if(board[this->getPosition().yPos][(this->getPosition() + Position(1, 0)).xPos] != nullptr)
                return false;
        }
    }

    if(relPosition.xm()){
        std::cout << "----xm-----" << std::endl;

        for(int i = -1; i > relPosition.xPos; i--){
            std::cout << "Petla sie wykonuje\n";
            std::cout << "board[" << (this->getPosition()).yPos;
            std::cout << "][" << (this->getPosition() + Position(i, 0)).xPos << "]\n";
            if(board[this->getPosition().yPos][(this->getPosition() + Position(i, 0)).xPos] != nullptr)
                return false;
        }
    }

    if(relPosition.yp()){
        std::cout << "----yp-----" << std::endl;

        for(int i = 1; i < relPosition.yPos; i++){
            std::cout << "Petla sie wykonuje\n";
            std::cout << "board[" << (this->getPosition() + Position(0, i)).yPos;
            std::cout << "][" << (this->getPosition()).xPos << "]\n";

            if(board[(this->getPosition() + Position(0, i)).yPos][this->getPosition().xPos] != nullptr)
                return false;
        }
    }

    if(relPosition.ym()){
        std::cout << "----ym-----" << std::endl;

        for(int i = -1; i > relPosition.yPos; i--){
            std::cout << "Petla sie wykonuje\n";
            std::cout << "board[" << (this->getPosition() + Position(0, i)).yPos;
            std::cout << "][" << (this->getPosition()).xPos << "]\n";

            if(board[(this->getPosition() + Position(0, i)).yPos][(this->getPosition()).xPos] != nullptr)
                return false;
        }
    }

    //from bishop class

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
}