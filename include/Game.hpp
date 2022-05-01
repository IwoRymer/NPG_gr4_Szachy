#ifndef TESTS_GAME_HPP
#define TESTS_GAME_HPP

#include "window.hpp"

class Game{
public:
    Game();

public:
    Window board;
    SDL_Event event;
};

#endif //TESTS_GAME_HPP
