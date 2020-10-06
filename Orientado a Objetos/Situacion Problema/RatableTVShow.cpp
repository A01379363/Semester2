#include "RatableTVShow.h"

RatableTVShow::RatableTVShow(int ID, string name, string genre) : TVShow(ID, name, genre) {}

void RatableTVShow::rate(int rating)
{
    if (rating > 0 && rating < 6)
    {
        numOfRatings++;
        this->rating = (this->rating + rating);
        avgRating = this->rating / numOfRatings;
    }
    else
    {
        cout << "Number out of range. Rating must be a number between 1 and 5" << endl;
    }
}

void RatableTVShow::print()
{
    TVShow::print();
    cout << "Average Rating: " << avgRating << "/5" << endl;
    cout << "Number of Ratings: " << numOfRatings << endl;
}