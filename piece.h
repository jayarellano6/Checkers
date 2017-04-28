#ifndef PIECE_H_INCLUDED
#define PIECE_H_INCLUDED
#include <cassert>
using namespace std;

class Piece
{
private:
    int x,
        y;
    bool isRed,
         isKing;
public:
    Piece();
    Piece(int x, int y, bool isRed, bool isKing);
    void setX(int x);
    void setY(int y);
    void setIsRed(bool isRed);
    void setIsKing(bool isKing);

    int getX() const {return x;}
    int getY() const {return y;}
    bool getIsRed() const {return isRed;}
    bool getIsKing() const {return isKing;}

};

#endif // PIECE_H_INCLUDED
