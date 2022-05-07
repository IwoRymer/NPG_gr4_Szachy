#ifndef CHESS_QUEEN_HPP
#define CHESS_QUEEN_HPP

#include "../Piece.hpp"

class Queen : public Piece{
public:
    // konstruktor
    Queen(int x, int y, Color c);

    bool move(const Position &position) override;


    static bool isValidMove(const Queen &queen, const Position &position);
};

#endif //CHESS_QUEEN_HPP
