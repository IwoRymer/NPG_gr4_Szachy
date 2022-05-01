#ifndef TESTS_GAME_HPP
#define TESTS_GAME_HPP

#include "window.hpp"

// Pownien byś singleton ale lenistwo
class Game{
public:
    Game();

    // Porusza obrazem
    void movePNG(const Piece* piece, const Position &posOld, const Position &posNew);

    void changePositionOnField(const Position &oldPos, const Position &newPos);

    Piece* getField (const Position &pos) const;

public:
    Piece* field[8][8];
    Window board;
    SDL_Event event;
    Rook r1;
};

#endif //TESTS_GAME_HPP
