#ifndef CHESS_KNIGHT_HPP
#define CHESS_KNIGHT_HPP

#include "../Piece.hpp"
class Knight : public Piece{
public:
    // konstruktor
    Knight(int x, int y, Color c);

    bool move(const Position &position) override;


    static bool isValidMove(const Knight &knight, const Position &position);
};
#endif //CHESS_KNIGHT_HPP
