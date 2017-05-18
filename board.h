#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED
#include "piece.h"
#include <iostream>

class Board
{
private:
    bool isValidMove;
    bool whosTurn;
public:
    Board();
    void swapValues(Piece& p1, Piece& p2);

    void forceMove(int x, int y);

    void printBoard();
    Piece b[8][8];
    Player blk;
    Player red;



    bool checkMove(int x, int y, int x1, int y1);
    void movePiece(int x, int y, int x1, int y1);




};

#endif // BOARD_H_INCLUDED


