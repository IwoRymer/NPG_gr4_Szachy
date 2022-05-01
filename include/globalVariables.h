#ifndef CHESS_GLOBALVARIABLES_H
#define CHESS_GLOBALVARIABLES_H

#include <unordered_map>
#include <string>

static char chessBoard[8][8] = {{'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'}
};

struct Position{
    Position(int a, int b): xPos{a}, yPos{b} {}
    bool operator==(const Position &other) const{
        if (this->xPos == other.xPos && this->yPos == other.yPos)
            return true;
        return false;
    }
    bool operator!=(const Position &other) const {
        return !(*this == other);
    }
    int xPos, yPos;
};

enum Color{ white = 0, black};

// Defnicje w pliku Game.cpp
extern const std::string pathBPawn;
extern const std::string pathBRook;
extern const std::string pathBKnight;
extern const std::string pathBBishop;
extern const std::string pathBKing;
extern const std::string pathBQueen;
//WHITE
extern const std::string pathWPawn;
extern const std::string pathWRook;
extern const std::string pathWKnight;
extern const std::string pathWBishop;
extern const std::string pathWKing;
extern const std::string pathWQueen;


#endif //CHESS_GLOBALVARIABLES_H
