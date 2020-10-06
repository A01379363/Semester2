#include "RatableMovie.h"

RatableMovie::RatableMovie(int ID, int duration, string name, string genre, int year, string director)
    : Movie(ID, duration, name, genre, year, director) {}
void RatableMovie::rate(int rating)
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

void RatableMovie::print()
{
    Movie::print();
    cout << "Average Rating: " << avgRating << "/5" << endl;
    cout << "Number of Ratings: " << numOfRatings << endl;
}