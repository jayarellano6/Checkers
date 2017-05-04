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
    void movePiece();
    void setPieces();
    void printBoard();
    int checkwin();

};

#endif // BOARD_H_INCLUDED

