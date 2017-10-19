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
=======
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


