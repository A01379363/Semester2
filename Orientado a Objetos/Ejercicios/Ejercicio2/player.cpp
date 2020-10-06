#include <string>
using namespace std;

class Player
{
private:
    string name;
    int health;
    int speed;

public:
    Player() = default;
    Player(string name, int health, int speed)
    {
        this->name = name;
        this->health = health;
        this->speed = speed;
    }
    void play();
    void getExtraLife()
    {
        health += 1;
    }
    void getScore();
    void move();
    void loseLife()
    {
        health -= 1;
    }
    void speedUp(int add_speed)
    {
        speed += add_speed;
    }
    void slowDown(int sub_speed)
    {
        speed -= sub_speed;
    }
};

int main()
{
    Player *player1 = new Player("Mario", 2, 70);
    player1->play();
    player1->speedUp(20);
    player1->getExtraLife();

    Player *player2 = new Player("Luigi", 2, 85);
    player2->play();
    player2->slowDown(15);
    player2->loseLife();

    Player *player3 = new Player("Yoshi", 2, 100);
    player3->play();
    player3->slowDown(15);
    player3->getExtraLife();

    delete player1;
    delete player2;
    delete player3;

    return 0;
}