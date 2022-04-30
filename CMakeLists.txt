cmake_minimum_required(VERSION 3.21)
project(Chess)

set(CMAKE_CXX_STANDARD 20)


add_executable(Chess main.cpp src/board.cpp include/board.hpp src/Piece.cpp include/Piece.hpp include/pieces/Rook.hpp include/pieces/pawn.hpp include/pieces/king.hpp include/pieces/queen.hpp include/pieces/bishop.hpp include/pieces/knight.hpp src/pieces/bishop.cpp src/pieces/king.cpp src/pieces/knight.cpp src/pieces/pawn.cpp src/pieces/queen.cpp src/pieces/Rook.cpp include/globalVariables.h)

