#ifndef CHESS_KNIGHT_HPP
#define CHESS_KNIGHT_HPP

#include "../Piece.hpp"
class Knight : public Piece{
public:
    // konstruktor
    Knight(int x, int y, Color c);
    bool Pawn::isValidMove(const Position& newPosition, Piece* (&board)[8][8]) const;

};
#endif //CHESS_KNIGHT_HPP
