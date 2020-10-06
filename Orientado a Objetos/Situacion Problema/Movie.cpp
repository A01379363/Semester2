#include "Movie.h"

Movie::Movie(int ID, int duration, string name, string genre, int year, string director)
    : Video(ID, duration, name, genre), year(year), director(director) {}

int Movie::getYear() { return year; }

string Movie::getDirector() { return director; }

void Movie::print()
{
    cout << "--------------------------------------" << endl;
    cout << "Type: Movie" << endl;
    cout << "ID: " << getID() << endl;
    cout << "Title: " << getName() << endl;
    cout << "Duration: " << getDuration() << " min." << endl;
    cout << "Genre: " << getGenre() << endl;
    cout << "Year of Release: " << getYear() << endl;
    cout << "Director: " << getDirector() << endl;
}