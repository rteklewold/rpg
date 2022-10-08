#ifndef MAGE_H
#define MAGE_H
#include "player.h"

class Mage:public Player
{
public:
    Mage(string name, Race race);
    string attack();
};

#endif // MAGE_H
