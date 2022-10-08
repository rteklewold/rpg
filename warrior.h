#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"

class Warrior:public Player
{
public:
    Warrior(string name, Race race);
    string attack();
};

#endif // WARRIOR_H
