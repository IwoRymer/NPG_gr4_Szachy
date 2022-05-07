#ifndef CHESS_KING_HPP
#define CHESS_KING_HPP

#include "../Piece.hpp"

class King : public Piece{
public:
    // konstruktor
    King(int x, int y, Color c);

    bool move(const Position &position) override;

    static bool isValidMove(const King &king, const Position &position);

};
#endif //CHESS_KING_HPP
