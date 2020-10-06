#include "Video.h"

Video::Video(int ID, int duration, string name, string genre) : ID(ID), duration(duration), name(name), genre(genre) {}
int Video::getID() { return ID; }
int Video::getDuration() { return duration; }
string Video::getName() { return name; }
string Video::getGenre() { return genre; }
