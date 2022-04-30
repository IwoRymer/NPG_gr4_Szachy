#include "../include/board.hpp"
#include <iostream>
#include <sstream>
#include <cctype>

char board::board[8][8] = {{'-', '-', '-', '-', '-', '-', '-', '-'},
                           {'-', '-', '-', '-', '-', '-', '-', '-'},
                           {'-', '-', '-', '-', '-', '-', '-', '-'},
                           {'-', '-', '-', '-', '-', '-', '-', '-'},
                           {'-', '-', '-', '-', '-', '-', '-', '-'},
                           {'-', '-', '-', '-', '-', '-', '-', '-'},
                           {'-', '-', '-', '-', '-', '-', '-', '-'},
                           {'-', '-', '-', '-', '-', '-', '-', '-'}
};


void board::print(){
    //char box1 = whiteBox, box2 = ' ';
    char numberOfColumn;
    for (std::size_t i = 0; i <= 8; i++){
        for (std::size_t j = 0; j <= 8; ++j) {

            if (j == 0){
                //Poprawnie
                /*numberOfColumn = 8 - i ? (char)(56 - i) : ' ';
                std::cout << " " << numberOfColumn << " ";*/
                std::cout << " " << i << " ";
            }
            else if (i == 8){
                //Poprawna wersja std::cout << (char)(64 + j) << " ";
                std::cout << j - 1 << " ";
            }
            else{
                if( (j-1) % 2 == 0)
                    std::cout << board[i][j-1] << ' ';
                else
                    std::cout << board[i][j-1] << ' ';
            }
        }
        std::cout << std::endl;
    }
}

void board::updateBoard(const Piece &p){
    board::board[p.getPosition().yPos][p.getPosition().xPos] = p.getSymbol();
}

