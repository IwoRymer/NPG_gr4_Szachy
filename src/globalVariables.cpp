#include "globalVariables.h"

bool Position::operator==(const Position &other) const {
    if (this->xPos == other.xPos && this->yPos == other.yPos)
        return true;
    return false;
}

bool Position::operator!=(const Position &other) const {
    return !(*this == other);
}

//Czy Dobra kolejność odejmowania?
Position Position::operator-(const Position& other) const {

    return Position(this->xPos - other.xPos,this->yPos - other.yPos);
}



// Ścieżki do grafik
// BLACK
const std::string pathBPawn = "../graphics/Chess_pdt60.png";
const std::string pathBRook = "../graphics/Chess_rdt60.png";
const std::string pathBKnight = "../graphics/Chess_ndt60.png";
const std::string pathBBishop = "../graphics/Chess_bdt60.png";
const std::string pathBKing = "../graphics/Chess_kdt60.png";
const std::string pathBQueen = "../graphics/Chess_qdt60.png";
//WHITE
const std::string pathWPawn = "../graphics/Chess_plt60.png";
const std::string pathWRook = "../graphics/Chess_rlt60.png";
const std::string pathWKnight = "../graphics/Chess_nlt60.png";
const std::string pathWBishop = "../graphics/Chess_blt60.png";
const std::string pathWKing = "../graphics/Chess_klt60.png";
const std::string pathWQueen = "../graphics/Chess_qlt60.png";