#ifndef CHESS_BOARD_HPP
#define CHESS_BOARD_HPP

#define SDL_MAIN_HANDLED

#include "SDL.h"
#include <SDL_image.h>
#include <string>


#include "Piece.hpp"
#include "pieces/rook.hpp"
#include "globalVariables.h"

class Window{
public:
    // Stałe rozmiary obrazu
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 640;

    // powinien byc konstruktor ale trudno
    void init();
    ~Window();

    // rysuje kolory na szachownicy
    void drawBackground() const;

    // Rysuje figury na szchownicy
    // pola jako liczby od 0 -> 63
    // tak, wiem glupie
    void drawPNG(int pos, const std::string &path) const;
    void drawPNG(const Position &oldPos, const Position &newPos, const std::string &path) const;

    void undoPieceRender(int x, int y) const;


public:
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
};

#endif //CHESS_BOARD_HPP
