#ifndef CHESS_ROOK_HPP
#define CHESS_ROOK_HPP

#include "../Piece.hpp"

class Rook : public Piece{
public:
    // konstruktor
    Rook(int x, int y, Color c);


    //static bool isValidMove(const Rook &rook, const std::vector<Piece*> &vec);
};



#endif //CHESS_ROOK_HPP
