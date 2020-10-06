#include <string>
using namespace std;

class Videogame
{
private:
    string name;
    string developer;
    string publisher;

public:
    Videogame() = default;
    Videogame(string name, string developer, string publisher)
    {
        this->name = name;
        this->developer = developer;
        this->publisher = publisher;
    }
    void startLevel();
    void pause();
    void save();
};