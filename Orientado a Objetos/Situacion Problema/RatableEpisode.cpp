#include "RatableEpisode.h"

RatableEpisode::RatableEpisode(int ID, int duration, string name, string genre, int season, int epNum)
    : Episode(ID, duration, name, genre, season, epNum) {}

void RatableEpisode::rate(int rating)
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

void RatableEpisode::print()
{
    Episode::print();
    cout << "Average Rating: " << avgRating << "/5" << endl;
    cout << "Number of Ratings: " << numOfRatings << endl;
}