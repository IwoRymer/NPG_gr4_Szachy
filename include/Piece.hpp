#ifndef CHESS_PIECE_HPP
#define CHESS_PIECE_HPP


struct Position{
    Position(int a, int b): xPos{a}, yPos{b} {}
    int xPos, yPos;
};

enum Color{ white = 0, black};


class Piece{
public:
    virtual bool move() = 0;

    virtual Color getColor() const = 0;
    virtual ~Piece() = default;
};


#endif //CHESS_PIECE_HPP
