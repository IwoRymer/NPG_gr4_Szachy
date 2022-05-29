#include "mainLoop.hpp"
#include <iostream>

void mainLoop::run(){
    Game game;

    bool isRunning = true;

    Color turn = Color::white;

    Piece* clickedPiece = nullptr;

    Position oldPos(0,0), newPos(0,0);

    while (isRunning){
        while(SDL_WaitEvent(&game.event)) {
            if (game.event.type == SDL_QUIT) {
                isRunning = false; break;
            }

            else if (game.event.type == SDL_MOUSEBUTTONDOWN) {
                SDL_GetMouseState(&oldPos.xPos, &oldPos.yPos);
                oldPos.xPos /= 80;
                oldPos.yPos /= 80;

                clickedPiece = game.getField(oldPos); // MOŻE BYĆ NULLPTR
            }

            else if (game.event.type == SDL_MOUSEBUTTONUP) {
                SDL_GetMouseState(&newPos.xPos, &newPos.yPos);
                newPos.xPos /= 80;
                newPos.yPos /= 80;

                if (clickedPiece == nullptr)
                    std::cout << "Error: No piece on this square" << std::endl;

                else if(clickedPiece->getColor() != turn)
                    std::cout << "Error: Wrong color of the piece" << std::endl;

                else if(newPos == oldPos)
                    std::cout << "Error: The position was the same: board[" << newPos.yPos << "][" << newPos.xPos << "]" << std::endl;

                else if(!clickedPiece->move(newPos, game.field))
                    std::cout << "Error: this move is not possible: board[" << newPos.yPos << "][" << newPos.xPos << "]" << std::endl;

                else { // Poruszanie figurami
                    game.movePiece(oldPos, newPos);
                    turn = (turn == Color::white ? Color::black : Color::white);
                    //std::cout << "Newpos board[" << newPos.yPos << "][" << newPos.xPos << "]"<< std::endl;
                }
            }

        }
    }// end of while(isRunning)
}
