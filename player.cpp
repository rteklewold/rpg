#include "player.h"

Player::Player(string name, Race race, int hitPoints, int magicPoints){
   this->name = name;
   this->race = race;
   this->hitPoints = hitPoints;
   this->magicPoints = magicPoints;
}

Player::~Player(){
    cout << "Object is being destroyed " <<endl;
}
string Player::getName() const{
   return name;

}
Race Player::getRace() const{
    return race;
}
string Player::whatRace() const{
  string value;
  if(race==Human){
      value = "Human";
  }
  else if(race==Elf){
     value = "Elf";
  }
  else if(race==Dwarf){
     value = "Dwarf";
  }
  else if(race==Orc){
     value = "Orc";
  }
  else if(race==Troll){
     value = "Troll";
  }

  return value;
}
int Player::getHitpoints() const{
   return hitPoints;
}
int Player::getMagicpoints() const{
   return magicPoints;
}
void Player::setName(string name){
    this->name = name;
}
void Player::setRace(Race race){
  this->race = race;
}
void Player::setHitpoints(int hitPoints){
    this->hitPoints = hitPoints;
}
void Player::setMagicpoints(int magicPoints){
    this->magicPoints = magicPoints;
}
