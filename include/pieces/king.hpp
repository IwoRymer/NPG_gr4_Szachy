#ifndef CHESS_KING_HPP
#define CHESS_KING_HPP

#include "../Piece.hpp"

class King : public Piece{
public:
    // konstruktor
    King(int x, int y, Color c);

    bool isValidMove(const Position & newPosition, Piece***& board) const;

};
#endif //CHESS_KING_HPP
