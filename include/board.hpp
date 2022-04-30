#ifndef CHESS_BOARD_HPP
#define CHESS_BOARD_HPP

#include <windows.h>
#include <cstdlib>
#include <string>
#include <vector>


#include "Piece.hpp"
#include "pieces/Rook.hpp"
#include "globalVariables.h"
#include "SDL2/SDL_image.h"


namespace board{

    void init();
    // prints out the board
    void print();

    void update(const Piece &p);
}

#endif //CHESS_BOARD_HPP
