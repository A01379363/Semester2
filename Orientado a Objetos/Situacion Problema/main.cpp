#include "commons.h"
#include "RatableMovie.h"
#include "RatableEpisode.h"
#include "RatableTVShow.h"

int main()
{
    Movie avengers(1, 148, "The Avengers", "Action", 2012, "Anthony Russo");
    avengers.print();
    RatableMovie avengers2(2, 144, "Avengers: Age of Ultron", "Action", 2015, "Joss Whedon");
    avengers2.rate(5);
    avengers2.rate(3);
    avengers2.rate(2);
    avengers2.rate(4);
    avengers2.print();

    Episode ep(3, 30, "Generic Episode", "Reality TV", 1, 1);
    ep.print();

    cout << "\n";

    RatableEpisode ratEp(4, 22, "Rate Me!", "Suspense", 1, 2);
    ratEp.rate(0);
    ratEp.rate(4);
    ratEp.rate(1);
    ratEp.rate(5);
    ratEp.print();

    TVShow ricknmorty(5, "Rick & Morty", "Cartoon/Comedy");
    Episode *ricknmortyS1E1 = new Episode(5, 20, "Pilot", "Cartoon/Comedy", 1, 1);
    Episode *ricknmortyS1E2 = new Episode(6, 20, "Lawnmower Dog", "Cartoon/Comedy", 1, 2);
    Episode *ricknmortyS1E3 = new Episode(7, 20, "Anatomy Park", "Cartoon/Comedy", 1, 3);
    ricknmorty.addEpisode(ricknmortyS1E1);
    ricknmorty.addEpisode(ricknmortyS1E2);
    ricknmorty.addEpisode(ricknmortyS1E3);
    ricknmorty.print();

    RatableTVShow curb(6, "Curb Your Enthusiasm", "Comedy");
    RatableEpisode *curbS1E1 = new RatableEpisode(8, 28, "The Pants Tent", "Comedy", 1, 1);
    RatableEpisode *curbS1E2 = new RatableEpisode(9, 28, "Ted and Mary", "Comedy", 1, 2);
    RatableEpisode *curbS1E3 = new RatableEpisode(10, 28, "Gil", "Comedy", 1, 3);
    RatableEpisode *curbS1E4 = new RatableEpisode(11, 28, "The Bracelet", "Comedy", 1, 4);
    curb.addEpisode(curbS1E1);
    curb.addEpisode(curbS1E2);
    curb.addEpisode(curbS1E3);
    curb.addEpisode(curbS1E4);
    curb.rate(5);
    curb.rate(1);
    curb.rate(3);
    curb.print();

    delete ricknmortyS1E1;
    delete ricknmortyS1E2;
    delete ricknmortyS1E3;
    delete curbS1E1;
    delete curbS1E2;
    delete curbS1E3;
    delete curbS1E4;
    return 0;
}