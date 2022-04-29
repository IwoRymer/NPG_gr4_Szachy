#include "../../include/pieces/Rook.hpp"

Rook::Rook(int x, int y, Color c): position_(x, y), color_{c}{
    symbol_ = (color_ == white ? 'r' : 'R');
}