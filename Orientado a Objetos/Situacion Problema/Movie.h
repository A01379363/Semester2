#include "commons.h"
#include "Video.h"

#pragma once
class Movie : public Video
{
private:
    int year;
    string director;

public:
    Movie() = default;
    Movie(int ID, int duration, string name, string genre, int year, string director);
    int getYear();
    string getDirector();
    virtual void print();
};