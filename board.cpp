#include "board.h"

Board::Board()
{

}
void Board::setPieces()
{
    b[0][1](0, 1, true, false, false);
    b[0][3](0, 3, true, false, false);
    b[0][5](0, 5, true, false, false);
    b[0][7](0, 7, true, false, false);

}
