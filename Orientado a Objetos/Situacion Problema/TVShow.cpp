#include "TVShow.h"

TVShow::TVShow(int ID, string name, string genre) : Video(ID, 0, name, genre) {}
void TVShow::addEpisode(Episode *e)
{
    show.push_back(e);
}

void TVShow::print()
{
    cout << "--------------------------------------" << endl;
    cout << "Type: TV Show" << endl;
    cout << "ID: " << getID() << endl;
    cout << "Title: " << getName() << endl;
    cout << "Number of Episodes: " << show.size() << endl;
    cout << "Genre: " << getGenre() << endl;

    for (int i = 0; i < show.size(); i++)
    {
        cout << "Episode " << show[i]->getEpNum() << ": " << show[i]->getName() << endl;
    }
}