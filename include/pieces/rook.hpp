#ifndef CHESS_ROOK_HPP
#define CHESS_ROOK_HPP

#include "../Piece.hpp"

class Rook : public Piece{
public:
    // konstruktor
    Rook(int x, int y, Color c);

    // zasady ruchu wiezy
    bool isValidMove(const Position & newPosition, Piece* (&board)[8][8]) const override;

};



#endif //CHESS_ROOK_HPP
