#include "player.h"

Player::Player()
{
    score =  0;
    isBlack = true;
    isTurn = false;
}
void Player::setIsBlack(bool is)
{
    is = isBlack;
    if(isBlack == true)
    {
        setIsTurn(false);
    }
    else
    {
        setIsTurn(true);
    }
}
void Player::incrementScore()
{
    score++;
}
