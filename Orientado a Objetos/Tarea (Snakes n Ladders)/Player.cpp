#include "Player.h"
using namespace std;

Player::Player(int id)
{
    this->id = id;
    position = 0;
}

void Player::setPosition(int position)
{
    this->position = position;
}

int Player::getPosition()
{
    return position;
}

int Player::getID()
{
    return id;
}
