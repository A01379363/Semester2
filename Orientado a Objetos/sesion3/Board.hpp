#include <iostream>
#include <string>
using namespace std;
#pragma once

class User;

class Board
{
    User *owner;
    string allMessages;

public:
    Board() = default;
    Board(User *owner);
    void writeMessage(User *, string message);
    void printBoard();
    void clearMessages();
    int howManyMessages(User *);
};
