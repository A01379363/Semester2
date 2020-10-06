#include "commons.h"
#include "TVShow.h"
#include "Ratable.h"
#include "RatableEpisode.h"

class RatableTVShow : public TVShow, public Ratable
{

public:
    RatableTVShow() = default;
    RatableTVShow(int ID, string name, string genre);
    void rate(int rating);
    void print();
};