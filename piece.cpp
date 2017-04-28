#include "piece.h"
Piece::Piece()
{
    x = 0;
    y = 0;
    isRed = false;
    isKing = false;
}
Piece::Piece(int x, int y, bool isRed, bool isKing)
{
    this->x = x;
    this->y = y;
    this->isRed = isRed;
    this->isKing = isKing;
}
void Piece::setX(int new_x)
{
    assert(new_x >= 0 && new_x <= 7);
    x = new_x;
}
void Piece::setY(int new_y)
{
    assert(new_y >= 0 && new_y <= 7);
    y = new_y;
}
void Piece::setIsRed(bool new_isRed)
{
    isRed = new_isRed;
}
void Piece::setIsKing(bool new_isKing)
{
    isKing = new_isKing;
}
