#include "commons.h"
#include "Episode.h"

class TVShow : public Video
{
private:
    vector<Episode *> show;

public:
    TVShow() = default;
    TVShow(int ID, string name, string genre);
    void addEpisode(Episode *e);
    virtual void print();
};