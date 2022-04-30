#ifndef CHESS_ROOK_HPP
#define CHESS_ROOK_HPP

#include "../Piece.hpp"

class Rook : public Piece{
public:
    // konstruktor
    Rook(int x, int y, Color c);

    bool move(const Position &position) override;

    // zasady ruchu wiezy
    static bool isValidMove(const Rook &rook, const Position &position);
};



#endif //CHESS_ROOK_HPP
