#include <iostream>
using namespace std;

class ScoreBoard
{
private:
    int score1;
    int score2;

public:
    ScoreBoard() = default;
    ScoreBoard(int score1, int score2)
    {
        this->score1 = score1;
        this->score2 = score2;
    }

    void printScore()
    {
        cout << "Team 1: " << score1 << " | "
             << "Team 2: " << score2 << endl;
        cout << "--------------------------------------\n";
    }

    void addScore(int team, int points)
    {
        if (team == 1)
            score1 += points;
        else if (team == 2)
            score2 += points;
    }
    void subtractScore(int team, int points)
    {
        if (team == 1)
            score1 -= points;
        else if (team == 2)
            score2 -= points;
    }
};

int main()
{
    ScoreBoard *game1 = new ScoreBoard(0, 0);
    game1->printScore();
    game1->addScore(1, 3);
    game1->printScore();
    game1->addScore(2, 2);
    game1->printScore();
    game1->subtractScore(2, 2);
    game1->printScore();

    delete game1;
}