#include "commons.h"
#include "Movie.h"
#include "Ratable.h"

#pragma once
class RatableMovie : public Movie, public Ratable
{

public:
    RatableMovie() = default;
    RatableMovie(int ID, int duration, string name, string genre, int year, string director);
    void rate(int rating);
    void print();
};