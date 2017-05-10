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
    void leftUpMove(int x, int y);
    void rightUpMove(int x, int y);
    void leftDownMove(int x, int y);
    void rightDownMove(int x, int y);
    bool checkPieceKing(int x, int y);
    bool checkPieceRed(int x, int y);
    void printBoard();
    void checkwin();
    Piece b[8][8];


    bool checkMove(int x, int y, int x1, int y1);
    void movePiece(int x, int y, int x1, int y1);




};

#endif // BOARD_H_INCLUDED


