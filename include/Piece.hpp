#ifndef CHESS_PIECE_HPP
#define CHESS_PIECE_HPP


#include <vector>

struct Position{
    Position(int a, int b): xPos{a}, yPos{b} {}
    int xPos, yPos;
};

enum Color{ white = 0, black};


class Piece{
public:
    Piece(int x, int y, Color c): position_(x, y), color_{c} {}

    virtual bool move(const Position &position) = 0;

    // Getters
    Position getPosition() const{ return position_;}
    char getSymbol() const{ return symbol_;}
    Color getColor() const{ return color_;}

    virtual bool isKing() const { return false;}

    virtual ~Piece() = default;

protected:
    bool colllisonInLine(const std::vector<Piece*> &vec, const Position &newPos) const;

protected:
    Position position_;
    char symbol_;
    Color color_;

};


#endif //CHESS_PIECE_HPP
