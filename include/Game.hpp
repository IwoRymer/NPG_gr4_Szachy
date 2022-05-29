#ifndef TESTS_GAME_HPP
#define TESTS_GAME_HPP

#include "window.hpp"
#include "pieces/bishop.hpp"
#include "pieces/pawn.hpp"
#include "pieces/king.hpp"
#include "pieces/knight.hpp"
#include "pieces/queen.hpp"

// Pownien byś singleton
class Game{
public:
    Game();

    void movePiece(const Position &oldPos, const Position &newPos);

    Piece* getField (const Position &pos) const;

public:
    Piece* field[8][8];
    Window board;
    SDL_Event event;

    // NA RAZIE WSZYTKO JEST JAKO WIEŻA bo nie ma innych jeszcze klas
    // Duże litery -> black, małe litery -> white
    Rook R1, R2, r1, r2;
    // TODO - pionki
    Rook P1, P2, P3, P4, P5, P6, P7, P8, p1, p2, p3, p4, p5, p6, p7, p8;
    // TODO - goniec
    Bishop G1, G2, g1, g2;
    // TODO - skoczek
    Knight S1, S2, s1, s2;
    // TODO - królowa król
    King K1, k1;
    Queen Q1, q1;
};

#endif //TESTS_GAME_HPP
