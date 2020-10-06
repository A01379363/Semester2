#include <string>
#include <vector>
using namespace std;

#pragma once
class Player;

class SnakesAndLadders
{
private:
    vector<string> *board;
    Player *player1;
    Player *player2;

public:
    SnakesAndLadders() = default;
    SnakesAndLadders(vector<string> *board, Player *player1, Player *player2);
    void rollDice(Player *player);
};