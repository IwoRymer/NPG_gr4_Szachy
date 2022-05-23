#include "window.hpp"
#include <iostream>


void Window::init() {
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("Chess", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              SCREEN_WIDTH, SCREEN_WIDTH, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    IMG_Init(IMG_INIT_PNG);
}

void Window::drawBackground() const {
    bool white = true;
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (white) {
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            } else {
                SDL_SetRenderDrawColor(renderer, 155, 103, 60, 255);
            }
            white = !white;
            SDL_Rect rectangle = {i * SCREEN_WIDTH / 8,
                                  j * SCREEN_HEIGHT / 8,
                                  SCREEN_WIDTH / 8,
                                  SCREEN_HEIGHT / 8};
            SDL_RenderFillRect(renderer, &rectangle);
        }
        white = !white;
    }
    SDL_RenderPresent(renderer);
}

//działa dobrze
void Window::drawPNG(int pos, const std::string &path) const {

    SDL_Rect rectangle;
    rectangle.w = SCREEN_WIDTH / 8;
    rectangle.h = SCREEN_HEIGHT / 8;
    rectangle.x = (pos % 8) * rectangle.w;
    rectangle.y = (int) (pos / 8) * rectangle.h;


    SDL_Surface *loadedImage = nullptr;
    loadedImage = IMG_Load(path.c_str());
    if (!loadedImage) {
        std::cout << "Image not loaded path:" << path.c_str() << std::endl;
    }
    SDL_Texture *ourPNG = SDL_CreateTextureFromSurface(renderer, loadedImage);
    SDL_FreeSurface(loadedImage);
    SDL_RenderCopy(renderer, ourPNG, nullptr, &rectangle);
    SDL_RenderPresent(renderer);
}

// TODO - połączyć z drawPNG
void Window::drawPNG(const Position &oldPos, const Position &newPos, const std::string &path) const{
    SDL_Surface *loadedImage = nullptr;
    loadedImage = IMG_Load(path.c_str());
    if (!loadedImage) {
        std::cout << "Image not loaded path:" << path.c_str() << std::endl;
    }
    SDL_Texture *ourPNG = SDL_CreateTextureFromSurface(renderer, loadedImage);
    SDL_FreeSurface(loadedImage);
    SDL_Rect rNew = {newPos.xPos * 80, newPos.yPos * 80, 80, 80};

    SDL_RenderCopy(renderer, ourPNG, NULL, &rNew);
}


void Window::undoPieceRender(int x, int y) const
{
    if ((x % 2 == 0 && y % 2 == 0) || (x % 2 == 1 && y % 2 == 1))
    {
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    }
    else
    {
        SDL_SetRenderDrawColor(renderer, 155, 103, 60, 255);
    }
    SDL_Rect rectangle = { x * SCREEN_WIDTH / 8,
                           y * SCREEN_HEIGHT / 8,
                           SCREEN_WIDTH / 8,
                           SCREEN_HEIGHT / 8 };
    SDL_RenderFillRect(renderer, &rectangle);

    SDL_RenderPresent(renderer);
    SDL_UpdateWindowSurface(window);
}

Window::~Window() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    IMG_Quit();
    SDL_Quit();
}