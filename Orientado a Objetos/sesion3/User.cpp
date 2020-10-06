#include "User.hpp"
#include "Board.hpp"

//Encapsulamiento

void User::writeOnBoard(Board *board, string message)
{
    board->writeMessage(this, message);
}

User::User(string name)
{
    setName(name);
}

User::~User()
{
    cout << "destructor de user\n";
}

string User::getName() { return name; }
void User::setName(string name) { this->name = name; }