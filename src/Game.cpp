#include "Game.hpp"

Game::Game(){
    board.init();
    board.drawBackground();

    board.drawPNG(12 , "../Chess_bdt60.png");
}

