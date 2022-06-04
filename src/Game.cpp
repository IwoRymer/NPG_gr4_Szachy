#include "Game.hpp"

Game::Game(): R1(0, 0, Color::black), R2(7, 0, Color::black),
            P1(0, 1, Color::black), P2(1, 1, Color::black), P3(2, 1, Color::black),
            P4(3, 1, Color::black), P5(4, 1, Color::black), P6(5, 1, Color::black),
            P7(6, 1, Color::black), P8(7, 1, Color::black),
            S1(1, 0, Color::black), S2(6, 0, Color::black),
            G1(2, 0, Color::black), G2(5, 0, Color::black),
            Q1(3, 0, Color::black), K1(4, 0, Color::black),
            r1(0, 7, Color::white), r2(7, 7, Color::white),
            p1(0, 6, Color::white), p2(1, 6, Color::white), p3(2, 6, Color::white),
            p4(3, 6, Color::white), p5(4, 6, Color::white), p6(5, 6, Color::white),
            p7(6, 6, Color::white), p8(7, 6, Color::white),
            s1(1, 7, Color::white), s2(6, 7, Color::white),
            g1(2, 7, Color::white), g2(5, 7, Color::white),
            q1(3, 7, Color::white), k1(4, 7, Color::white){

    board.init();
    board.drawBackground();
    for (int i = 2; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            field[i][j] = nullptr;
    }
    // Black
    field[0][0] = &R1;
    field[0][7] = &R2;

    field[0][1] = &S1;
    field[0][6] = &S2;

    field[0][2] = &G1;
    field[0][5] = &G2;

    field[0][3] = &Q1;
    field[0][4] = &K1;

    field[1][0] = &P1;
    field[1][1] = &P2;
    field[1][2] = &P3;
    field[1][3] = &P4;
    field[1][4] = &P5;
    field[1][5] = &P6;
    field[1][6] = &P7;
    field[1][7] = &P8;

    // White
    field[7][0] = &r1;
    field[7][7] = &r2;

    field[7][1] = &s1;
    field[7][6] = &s2;

    field[7][2] = &g1;
    field[7][5] = &g2;

    field[7][3] = &q1;
    field[7][4] = &k1;

    field[6][0] = &p1;
    field[6][1] = &p2;
    field[6][2] = &p3;
    field[6][3] = &p4;
    field[6][4] = &p5;
    field[6][5] = &p6;
    field[6][6] = &p7;
    field[6][7] = &p8;

   /* //TODO usunąc po stworzeniu klas wszystkich figur
    P1.changePath(pathBPawn);
    P2.changePath(pathBPawn);
    P3.changePath(pathBPawn);
    P4.changePath(pathBPawn);
    P5.changePath(pathBPawn);
    P6.changePath(pathBPawn);
    P7.changePath(pathBPawn);
    P8.changePath(pathBPawn);
    //G1.changePath(pathBBishop);
    //G2.changePath(pathBBishop);
    S1.changePath(pathBKnight);
    S2.changePath(pathBKnight);
    Q1.changePath(pathBQueen);
    K1.changePath(pathBKing);
    p1.changePath(pathWPawn);
    p2.changePath(pathWPawn);
    p3.changePath(pathWPawn);
    p4.changePath(pathWPawn);
    p5.changePath(pathWPawn);
    p6.changePath(pathWPawn);
    p7.changePath(pathWPawn);
    p8.changePath(pathWPawn);
   // g1.changePath(pathWBishop);
    //g2.changePath(pathWBishop);
    s1.changePath(pathWKnight);
    s2.changePath(pathWKnight);
    q1.changePath(pathWQueen);
    k1.changePath(pathWKing);
    // ----------------------------*/

    board.drawPNG(0, R1.getPath());
    board.drawPNG(7 , R2.getPath());
    board.drawPNG(1, S1.getPath());
    board.drawPNG(6, S2.getPath());
    board.drawPNG(2, G1.getPath());
    board.drawPNG(5, G2.getPath());
    board.drawPNG(3, Q1.getPath());
    board.drawPNG(4, K1.getPath());
    for(int i = 8; i <= 15; i++) {
        board.drawPNG(i, pathBPawn);
        board.drawPNG(i + 40, pathWPawn);
    }
    board.drawPNG(63, r1.getPath());
    board.drawPNG(56 , r2.getPath());
    board.drawPNG(57, s1.getPath());
    board.drawPNG(62, s2.getPath());
    board.drawPNG(58, g1.getPath());
    board.drawPNG(61, g2.getPath());
    board.drawPNG(59, q1.getPath());
    board.drawPNG(60, k1.getPath());
}

Piece* Game::getField (const Position &pos) const{
    return field[pos.yPos][pos.xPos];
}

void Game::movePiece(const Position &oldPos, const Position &newPos){
    board.drawPNG(oldPos, newPos, this->getField(oldPos)->getPath());
    board.undoPieceRender(oldPos.xPos, oldPos.yPos);
    field[newPos.yPos][newPos.xPos] = field[oldPos.yPos][oldPos.xPos];
    field[oldPos.yPos][oldPos.xPos] = nullptr;
}