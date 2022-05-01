#ifndef CHESS_BOARD_HPP
#define CHESS_BOARD_HPP

#include "window.hpp"
#include "SDL2/SDL.h"
#include <SDL2/SDL_image.h>
#include <string>


#include "Piece.hpp"
#include "pieces/Rook.hpp"
#include "globalVariables.h"

class Window{
public:
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 640;

    void init();

    // rysuje szachownice
    void drawBackground();

    // Rysuje figury na szchownicy
    // pola jako liczby od 0 -> 63
    void drawPNG(int pos, const std::string &path);

    ~Window();

public:
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
};

#endif //CHESS_BOARD_HPP
