#ifndef CHESS_GLOBALVARIABLES_H
#define CHESS_GLOBALVARIABLES_H

#include <unordered_map>
#include <string>

/* char chessBoard[8][8] = {{'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'},
                                {'-', '-', '-', '-', '-', '-', '-', '-'}
};*/

// Reprezentacja pozycji x,y na planszy
struct Position{
    Position(int a = 0, int b = 0): xPos{a}, yPos{b} {};
    bool operator==(const Position &other) const;
    bool operator!=(const Position &other) const;
    Position operator-(const Position &other) const;
    int xPos, yPos;
};

// Typ wyliczeniowy - kolor figur
enum Color{ white = 0, black};




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
