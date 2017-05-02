#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED
#include "piece.h"

private:
    Piece b[8][8];
    bool isValidMove;
    bool whosTurn;
public:
    Board();
    void movePiece();
    void setPieces();
    int checkwin();

};

#endif // BOARD_H_INCLUDED
