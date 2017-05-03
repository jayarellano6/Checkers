#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include <iostream>
#include "piece.h"
using namespace std;

class Board
{
    private:
        Piece board[8][8];
        int row, futureRow,
            column, futureColumn;
        char player1,
             player2;
    public:
        Board();
        void printBoard();
        void setPiece();
        bool checkMove();
        void movePiece(Piece board[8][8]);
};

#endif // BOARD_H_INCLUDED
