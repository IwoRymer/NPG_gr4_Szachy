#ifndef TESTS_GRAPHICS_HPP
#define TESTS_GRAPHICS_HPP

#include <stdio.h>
#include <SDL2/SDL.h>

namespace window {
    //Screen dimension constants
    const int SCREEN_WIDTH = 512;
    const int SCREEN_HEIGHT = 512;

    //Starts up SDL and creates window
    bool init();

    //Loads media
    bool loadMedia();

    //Frees media and shuts down SDL
    void close();

    //The window we'll be rendering to
    SDL_Window *gWindow = NULL;

    //The surface contained by the window
    SDL_Surface *gScreenSurface = NULL;

    //The image we will load and show on the screen
    SDL_Surface *gHelloWorld = NULL;

    bool init() {
        //Initialization flag
        bool success = true;

        //Initialize SDL
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
            success = false;
        } else {
            //Create window
            window::gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                                       SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
            if (window::gWindow == NULL) {
                printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
                success = false;
            } else {
                //Get window surface
                window::gScreenSurface = SDL_GetWindowSurface(gWindow);
            }
        }

        return success;
    }

    bool loadMedia() {
        //Loading success flag
        bool success = true;

        //Load splash image
        window::gHelloWorld = SDL_LoadBMP("../chessboard.bmp");
        if (window::gHelloWorld == NULL) {
            printf("Unable to load image %s! SDL Error: %s\n", "02_getting_an_image_on_the_screen/hello_world.bmp",
                   SDL_GetError());
            success = false;
        }

        return success;
    }

    void close() {
        //Deallocate surface
        SDL_FreeSurface(window::gHelloWorld);
        window::gHelloWorld = NULL;

        //Destroy window
        SDL_DestroyWindow(window::gWindow);
        window::gWindow = NULL;

        //Quit SDL subsystems
        SDL_Quit();
    }
}
#endif //TESTS_GRAPHICS_HPP
