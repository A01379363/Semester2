#include <string>
using namespace std;

class BoardGame
{
private:
    int lenght;
    int width;

public:
    BoardGame() = default;
    BoardGame(int lenght, int width)
    {
        this->lenght = lenght;
        this->width = width;
    }

    void checkSpace();
    void printPosition();
    void reset();
};