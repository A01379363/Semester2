#include "commons.h"

#pragma once
class Ratable
{

protected:
    float rating = 0.0;
    int numOfRatings = 0;
    float avgRating;
    virtual void rate(int rating) = 0;
};