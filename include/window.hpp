#ifndef CHESS_BOARD_HPP
#define CHESS_BOARD_HPP

#include "SDL2/SDL.h"
#include <SDL2/SDL_image.h>
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

    // rysuje kolory na szachownicy
    void drawBackground() const;

    // Rysuje figury na szchownicy
    // pola jako liczby od 0 -> 63
    // tak wiem  glupie
    void drawPNG(int pos, const std::string &path) const;
    void drawPNG(const Position &oldPos, const Position &newPos, const std::string &path) const;

    // zmazuje teksture figury
    void undoPieceRender(int x, int y) const;

    // Kopiuje
    //void movePNG(const Position oldPos, const Position newPos, const std::string &path) const;

    // wyczyszcza textury i zwalnia pamięć
    ~Window();

public:
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
};

#endif //CHESS_BOARD_HPP
