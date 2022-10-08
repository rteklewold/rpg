#ifndef PRIEST_H
#define PRIEST_H
#include "player.h"

class Priest:public Player
{
public:
    Priest(string name, Race race);
    string attack();
};

#endif // PRIEST_H
