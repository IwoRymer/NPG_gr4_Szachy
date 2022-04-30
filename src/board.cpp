#include "../include/board.hpp"
#include "../include/SDL2/SDL.h"
#include "Graphics.hpp"
#include <iostream>
#include <sstream>
#include <cctype>

void board::init(){
    window::init();
    window::loadMedia();
    SDL_BlitSurface( window::gHelloWorld, NULL, window::gScreenSurface, NULL );
    SDL_UpdateWindowSurface( window::gWindow );
}

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
                    std::cout << chessBoard[i][j-1] << ' ';
                else
                    std::cout << chessBoard[i][j-1] << ' ';
            }
        }
        std::cout << std::endl;
    }
}

void board::update(const Piece &p){
    chessBoard[p.getPosition().yPos][p.getPosition().xPos] = p.getSymbol();
}

