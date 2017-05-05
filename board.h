#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED
#include "piece.h"
#include <iostream>

class Board
{
private:
    Piece b[8][8];
    bool isValidMove;
    bool whosTurn;
public:
    Board();
    void swapValues(Piece& p1, Piece& p2);
    void leftUpMove(int x, int y);
    void rightUpMove(int x, int y);
    void leftDownMove(int x, int y);
    void rightDownMove(int x, int y);
    void setPieces();
    void printBoard();
    void checkwin();

};

#endif // BOARD_H_INCLUDED

