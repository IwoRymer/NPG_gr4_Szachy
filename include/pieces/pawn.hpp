#ifndef CHESS_PAWN_HPP
#define CHESS_PAWN_HPP

#include "../Piece.hpp"

class Pawn : public Piece{
public:
    // konstruktor
    Pawn(int x, int y, Color c);

    bool move(const Position &position) override;


    static bool isValidMove(const Pawn &pawn, const Position &position);
};

#endif //CHESS_PAWN_HPP
