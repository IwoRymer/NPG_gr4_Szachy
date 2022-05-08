#ifndef CHESS_BISHOP_HPP
#define CHESS_BISHOP_HPP

#include "../Piece.hpp"

class Bishop : public Piece{
public:
    // konstruktor
    Bishop(int x, int y, Color c);


    bool isValidMove(const Position & newPosition, Piece***& board) const;
};

#endif //CHESS_BISHOP_HPP
