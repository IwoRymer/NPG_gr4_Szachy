cmake_minimum_required(VERSION 3.21)
project(Szachy)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lmingw32")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++" )

include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(Chess main.cpp src/window.cpp include/window.hpp src/Piece.cpp include/Piece.hpp include/pieces/Rook.hpp include/pieces/pawn.hpp include/pieces/king.hpp include/pieces/queen.hpp include/pieces/bishop.hpp include/pieces/knight.hpp src/pieces/bishop.cpp src/pieces/king.cpp src/pieces/knight.cpp src/pieces/pawn.cpp src/pieces/queen.cpp src/pieces/Rook.cpp include/globalVariables.h src/mainLoop.cpp include/mainLoop.hpp src/Game.cpp src/globalVariables.cpp)

target_link_libraries(Chess mingw32 SDL2main SDL2 SDL2_image)