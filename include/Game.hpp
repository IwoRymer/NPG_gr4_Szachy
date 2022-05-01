#ifndef TESTS_GAME_HPP
#define TESTS_GAME_HPP

#include "window.hpp"

class Game{
public:
    Game();

    void draw();

    void movePNG(const Piece* piece, Position &posOld, const Position &posNew);

    void changePositionOnField(Position oldPos, Position newPos);
    Piece* getField (const Position &pos) const;

public:
    Piece* field[8][8];
    Window board;
    SDL_Event event;
    Rook r1;
};

#endif //TESTS_GAME_HPP
