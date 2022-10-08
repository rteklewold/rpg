#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;
enum Race{ Human, Elf, Dwarf, Orc, Troll };

class Player
{
public:
    Player(string name, Race race, int hitPoints, int magicPoints);
    virtual ~Player();
    string getName() const;
    Race getRace() const;
    string whatRace() const;
    int getHitpoints() const;
    int getMagicpoints() const;
    void setName(string name);
    void setRace(Race race);
    void setHitpoints(int hitPoints);
    void setMagicpoints(int magicPoints);
    virtual string attack() = 0;
private:
    string name;
    Race race;
    int hitPoints;
    int magicPoints;
};

#endif // PLAYER_H
