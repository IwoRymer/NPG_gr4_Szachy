#include "mainLoop.hpp"
#include <iostream>

void mainLoop::run(){
    Game game;

    bool isRunning = true;

    Piece* clickedPiece = nullptr;
    // Potrzebene do myszki
    Position oldPos(0,0), newPos(0,0);

    while (isRunning){
        while(SDL_WaitEvent(&game.event)) {
            // Zamkniecie aplikacji
            if (game.event.type == SDL_QUIT) {
                isRunning = false; break;
            }

            else if (game.event.type == SDL_MOUSEBUTTONDOWN) {
                SDL_GetMouseState(&oldPos.xPos, &oldPos.yPos);
                oldPos.xPos /= 80;
                oldPos.yPos /= 80;
                std::cout << "oldX: " << oldPos.xPos << " oldY: " << oldPos.yPos << std::endl;
                clickedPiece = game.getField(oldPos); // MOŻE BYĆ NULLPTR
            }

            else if (game.event.type == SDL_MOUSEBUTTONUP) {
                SDL_GetMouseState(&newPos.xPos, &newPos.yPos);
                newPos.xPos /= 80;
                newPos.yPos /= 80;
                std::cout << "newX: " << newPos.xPos << " newY: " << newPos.yPos << std::endl;
                if(clickedPiece) {
                    game.movePNG(clickedPiece, oldPos, newPos);
                    game.changePositionOnField(oldPos, newPos);
                }
            }

        }
    }
}
