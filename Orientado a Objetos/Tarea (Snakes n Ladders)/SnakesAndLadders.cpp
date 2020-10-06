#include <iostream>
#include <ctime>
#include <algorithm>
#include "SnakesAndLadders.h"
#include "Player.h"
using namespace std;

SnakesAndLadders::SnakesAndLadders(vector<string> *board1, Player *player1, Player *player2)
{
    this->board = board1;
    board->reserve(30);

    vector<int> s = {3, 14, 27};
    vector<int> l = {7, 10, 20};

    for (int i = 0; i < 30; i++)
    {
        if (i < 3 || i > 26)
        {
            board->push_back("N");
        }
        else
        {
            if (find(s.begin(), s.end(), i) != s.end())
                board->push_back("S");
            if (find(l.begin(), l.end(), i) != l.end())
                board->push_back("L");
            else
            {
                board->push_back("N");
            }
        }
    }
    this->player1 = player1;
    this->player2 = player2;
}

void SnakesAndLadders::rollDice(Player *player)
{
    srand(time(NULL));
    int roll = 0;
    roll = rand() % 6 + 1;

    cout << "Player " << player->getID() << " rolled a " << roll << endl;

    player->setPosition(player->getPosition() + roll);
    if ((*board)[player->getPosition()] == "S")
    {
        cout << "Player " << player->getID() << " landed on an S, going back 3 tiles" << endl;
        player->setPosition(player->getPosition() - 3);
    }
    if ((*board)[player->getPosition()] == "L")
    {
        cout << "Player " << player->getID() << " landed on an L, going forward 3 tiles" << endl;
        player->setPosition(player->getPosition() + 3);
    }
}
