cmake_minimum_required(VERSION 3.21)
project(Szachy)

set(CMAKE_CXX_STANDARD 20)

set(SDL2_INCLUDE_DIR lib/SDL/include)
set(SDL2_LIB_DIR lib/SDL/lib/x64)

include_directories(${PROJECT_SOURCE_DIR}/include ${SDL2_INCLUDE_DIR})
link_directories(${PROJECT_SOURCE_DIR}/lib ${SDL2_LIB_DIR})

add_executable(Chess main.cpp src/window.cpp include/window.hpp src/Piece.cpp include/Piece.hpp include/pieces/rook.hpp include/pieces/pawn.hpp include/pieces/king.hpp include/pieces/queen.hpp include/pieces/bishop.hpp include/pieces/knight.hpp src/pieces/bishop.cpp src/pieces/king.cpp src/pieces/knight.cpp src/pieces/pawn.cpp src/pieces/queen.cpp src/pieces/rook.cpp include/globalVariables.h src/mainLoop.cpp include/mainLoop.hpp src/Game.cpp src/globalVariables.cpp)

target_link_libraries(Chess SDL2main SDL2 SDL2_image)