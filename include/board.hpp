#ifndef CHESS_BOARD_HPP
#define CHESS_BOARD_HPP

#include <windows.h>
#include <cstdlib>
#include <string>
#include <vector>
#include <unordered_map>

#include "Piece.hpp"
#include "pieces/Rook.hpp"


namespace board{
    // the chessboard
    extern char board[8][8];

    // Przypisanie pola do figury
    extern std::unordered_map<int, Piece*> listOfPieces;

    // ASCII code
    // const char whiteBox = 219;

    // prints out the board
    void print();

    void updateBoard(const Piece &p);

}

#endif //CHESS_BOARD_HPP
