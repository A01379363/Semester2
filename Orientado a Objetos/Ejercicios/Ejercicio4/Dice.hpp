#include <string>
using namespace std;

class Dice
{
private:
    int num_of_sides;
    string color;

public:
    Dice() = default;
    Dice(int num_of_sides, string color)
    {
        this->num_of_sides = num_of_sides;
        this->color = color;
    }

    void roll();
    void printSide();
    void reset();
};