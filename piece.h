#ifndef PIECE_H_INCLUDED
#define PIECE_H_INCLUDED


class Piece
{
    private:
        bool isKing;
        char color;

    public:
        Piece();
        void setColor(char color){this->color = color;}
        char getColor()const{return color;}
=======
#include <cassert>
#include <fstream>
using namespace std;

class Piece
{
private:
    int x,
        y;
    char pieceDisplay;
    bool isPiece,
         isRed,
         isKing;
public:
    Piece();
    Piece(int x, int y, bool isPiece, bool isRed, bool isKing);
    void setAllValues(int x, int y, bool isPiece, bool isRed, bool isKing);
    void setX(int new_x);
    void setY(int new_y);
    void setIsPiece(bool new_isPiece);
    void setIsRed(bool new_isRed);
    void setIsKing(bool new_isKing);

    int getX() const {return x;}
    int getY() const {return y;}
    char getPieceDisplay() const {return pieceDisplay;}
    bool getIsPiece() const {return isPiece;}
    bool getIsRed() const {return isRed;}
    bool getIsKing() const {return isKing;}

    void operator =(const Piece& p2);


};

#endif // PIECE_H_INCLUDED
