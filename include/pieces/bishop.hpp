#ifndef CHESS_BISHOP_HPP
#define CHESS_BISHOP_HPP

#include "../Piece.hpp"

class Bishop : public Piece{
public:
    // konstruktor
    Bishop(int x, int y, Color c);

    bool move(const Position &position) override;


    static bool isValidMove(const Bishop &bishop, const Position &position);
};

#endif //CHESS_BISHOP_HPP
