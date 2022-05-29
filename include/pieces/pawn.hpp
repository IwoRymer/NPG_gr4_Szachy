#ifndef CHESS_PAWN_HPP
#define CHESS_PAWN_HPP

#include "../Piece.hpp"

class Pawn : public Piece{
public:
    // konstruktor
    Pawn(int x, int y, Color c);
    bool isValidMove(const Position& newPosition, Piece* (&board)[8][8]) const override;
};

#endif //CHESS_PAWN_HPP
