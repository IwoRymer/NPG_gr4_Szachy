#ifndef CHESS_QUEEN_HPP
#define CHESS_QUEEN_HPP

#include "../Piece.hpp"

class Queen : public Piece{
public:
    // konstruktor
    Queen(int x, int y, Color c);
    bool isValidMove(const Position & newPosition, Piece* (&board)[8][8]) const;
};

#endif //CHESS_QUEEN_HPP
