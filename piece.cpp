#include "piece.h"
Piece::Piece()
{
    x = 0;
    y = 0;
    isPiece = false;
    isRed = false;
    isKing = false;
    if(isPiece == false)
    {
        pieceDisplay = 176;
    }
    else if(isRed == true)
    {
        pieceDisplay = 'r';
    }
    else
        pieceDisplay = 'b';
}
Piece::Piece(int x, int y, bool isPiece, bool isRed, bool isKing)
{
    this->x = x;
    this->y = y;
    this->isPiece = isPiece;
    this->isRed = isRed;
    this->isKing = isKing;
    if(isPiece == false)
    {
        pieceDisplay = 176;
    }
    else if(isRed == true)
    {
        pieceDisplay = 'r';
    }
    else
        pieceDisplay = 'b';
}
void Piece::setAllValues(int x, int y, bool isPiece, bool isRed, bool isKing)
{
    this->x = x;
    this->y = y;
    this->isPiece = isPiece;
    this->isRed = isRed;
    this->isKing = isKing;
    if(isPiece == false)
    {
        pieceDisplay = 176;
    }
    else if(isRed == true)
    {
        pieceDisplay = 'r';
    }
    else
        pieceDisplay = 'b';
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
void Piece::setIsPiece(bool new_isPiece)
{
    isPiece = new_isPiece;
}
void Piece::setIsRed(bool new_isRed)
{
    isRed = new_isRed;
}
void Piece::setIsKing(bool new_isKing)
{
    isKing = new_isKing;
}
void Piece::operator =(const Piece& p2)
{
    x = p2.x;
    y = p2.y;
    pieceDisplay = p2.pieceDisplay;
    isPiece = p2.isPiece;
    isRed = p2.isRed;
    isKing = p2.isKing;
}


