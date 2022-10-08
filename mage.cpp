#include "mage.h"

Mage::Mage(string name, Race race):Player(name, race, 200, 0){

}
string Mage::attack(){
    string message = " I will crush with the power of my arcane missiles! ";
    return message;
}
