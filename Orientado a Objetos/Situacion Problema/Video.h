#include "commons.h"

#pragma once
class Video
{
private:
    int ID, duration;
    string name, genre;

public:
    Video() = default;
    Video(int ID, int duration, string name, string genre);
    int getID();
    int getDuration();
    string getName();
    string getGenre();
    virtual void print() = 0;
};