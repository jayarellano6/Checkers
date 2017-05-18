#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
using namespace std;

class Player
{
private:
    int score;
    bool isBlack;
    bool isTurn;

public:
    Player();

    void setIsBlack(bool is);
    void setIsTurn(bool isTurn) {this->isTurn = isTurn;}
    bool getIsTurn() {return isTurn;}
    int getScore() const {return score;}
    void incrementScore();
};


#endif // PLAYER_H_INCLUDED
