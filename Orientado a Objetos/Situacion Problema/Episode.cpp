#include "Episode.h"

Episode::Episode(int ID, int duration, string name, string genre, int season, int epNum)
    : Video(ID, duration, name, genre), season(season), epNum(epNum) {}
int Episode::getSeason() { return season; }
int Episode::getEpNum() { return epNum; }
void Episode::print()
{
    cout << "--------------------------------------" << endl;
    cout << "Type: Episode" << endl;
    cout << "ID: " << getID() << endl;
    cout << "Season: " << getSeason() << endl;
    cout << "Episode Number " << getEpNum() << endl;
    cout << "Title: " << getName() << endl;
    cout << "Duration: " << getDuration() << " min." << endl;
    cout << "Genre: " << getGenre() << endl;
}