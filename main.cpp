#include "src/App.cpp"
#include "include/SDL2/SDL.h"
#include <iostream>
#include <windows.h>


int main(int argc, char* argv []) {
    chessBoard[1][0] = 'k';
    Rook r1(0, 2, white);
    board::update(r1);
    board::print();
    std::cout << r1.colllisonInLine(Position(0, 1)) << std::endl;
    return 0;
}
