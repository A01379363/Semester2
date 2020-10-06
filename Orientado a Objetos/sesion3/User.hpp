#include <string>
#include <iostream>
using namespace std;
#pragma once

class Board;

class User
{
    void setName(string name);
    string name;

public:
    User() = default;
    User(string name);
    void writeOnBoard(Board *, string);
    string getName();

    ~User();
};