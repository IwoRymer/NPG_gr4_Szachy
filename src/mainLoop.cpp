#include "mainLoop.hpp"

void mainLoop::run(){
    Game game;

    bool isRuning = true;

    while (isRuning){
        SDL_WaitEvent(&game.event);
        if (game.event.type == SDL_QUIT){
            isRuning = false;
        }
    }

}
