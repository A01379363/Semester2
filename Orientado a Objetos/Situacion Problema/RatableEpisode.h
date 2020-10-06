#include "commons.h"
#include "Episode.h"
#include "Ratable.h"

#pragma once
class RatableEpisode : public Episode, public Ratable
{

public:
    RatableEpisode() = default;
    RatableEpisode(int ID, int duration, string name, string genre, int season, int epNum);
    void rate(int rating);
    void print();
};