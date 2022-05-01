#include "Game.hpp"

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


Game::Game(): r1(0, 0, black){
    board.init();
    board.drawBackground();
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            field[j][i] = nullptr;
        }
    }
    field[0][0] = &r1;
    /* // CZARNE FIGURY
     for(int i = 8; i <= 15; i++)
         board.drawPNG(i, pathBPawn);
     board.drawPNG(0 , pathBRook);
     board.drawPNG(7 , pathBRook);
     board.drawPNG(1, pathBKnight);
     board.drawPNG(6, pathBKnight);
     board.drawPNG(2, pathBBishop);
     board.drawPNG(5, pathBBishop);
     board.drawPNG(3, pathBQueen);
     board.drawPNG(4, pathBKing);
     // WHITE
     for(int i = 48; i <= 55; i++)
         board.drawPNG(i, pathWPawn);
     board.drawPNG(63 , pathWRook);
     board.drawPNG(56 , pathWRook);
     board.drawPNG(57, pathWKnight);
     board.drawPNG(62, pathWKnight);
     board.drawPNG(58, pathWBishop);
     board.drawPNG(61, pathWBishop);
     board.drawPNG(59, pathWQueen);
     board.drawPNG(60, pathWKing);*/
}

void Game::movePNG(const Piece* piece, Position &posOld, const Position &posNew){
    board.movePNG(posOld, posNew, piece->getPath());
    board.undoPieceRender(posOld.xPos, posOld.yPos);
}

Piece* Game::getField (const Position &pos) const{
    return field[pos.yPos][pos.xPos];
}

void Game::changePositionOnField(Position oldPos, Position newPos){
    field[newPos.yPos][newPos.xPos] = field[oldPos.yPos][oldPos.xPos];
    field[oldPos.yPos][oldPos.xPos] = nullptr;
}

void Game::draw(){
    //board.drawPNG((r1.getYPosition()*8) + r1.getXPosition(), r1.getPath());

};