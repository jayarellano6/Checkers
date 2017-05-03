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
};

#endif // PIECE_H_INCLUDED
