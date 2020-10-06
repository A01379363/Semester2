#include "commons.h"
#include "Video.h"

#pragma once
class Episode : public Video
{
private:
    int season, epNum;

public:
    Episode() = default;
    Episode(int ID, int duration, string name, string genre, int season, int epNum);
    int getSeason();
    int getEpNum();
    void print();
};
