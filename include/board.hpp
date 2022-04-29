#ifndef CHESS_BOARD_HPP
#define CHESS_BOARD_HPP

#include <windows.h>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>

#include "Piece.hpp"
#include "pieces/Rook.hpp"


namespace board{
    // the chessboard
    extern char board[8][8];

    extern std::vector<Piece*> vecPiece;

    // ASCII code
    // const char whiteBox = 219;

    // prints out the board
    void print();


}

#endif //CHESS_BOARD_HPP
