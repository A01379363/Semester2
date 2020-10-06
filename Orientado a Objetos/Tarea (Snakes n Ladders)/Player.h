#include <string>
using namespace std;

#pragma once
class Player
{
protected:
    int id;
    int position;

public:
    Player() = default;
    Player(int id);

    void setPosition(int position);
    int getPosition();
    int getID();
};
