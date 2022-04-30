#ifndef CHESS_GLOBALVARIABLES_H
#define CHESS_GLOBALVARIABLES_H

#include <unordered_map>

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

#endif //CHESS_GLOBALVARIABLES_H
