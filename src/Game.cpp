#include "Game.hpp"

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
    // TODO - trzeba jaką sesnsowną metode rysowania na poczatku wszystkich figur
    field[0][0] = &r1;
    board.drawPNG(0, r1.getPath());
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

void Game::movePNG(const Piece* piece, const Position &posOld, const Position &posNew){
    board.movePNG(posOld, posNew, piece->getPath());
    board.undoPieceRender(posOld.xPos, posOld.yPos);
}

Piece* Game::getField (const Position &pos) const{
    return field[pos.yPos][pos.xPos];
}

// TODO - czy figury powinny znać swoje miejsce, jeśli mamy od tego tablice ????
void Game::changePositionOnField(const Position &oldPos, const Position &newPos){
    field[newPos.yPos][newPos.xPos] = field[oldPos.yPos][oldPos.xPos];
    field[oldPos.yPos][oldPos.xPos] = nullptr;
}