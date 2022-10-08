#include "warrior.h"


Warrior::Warrior(string name, Race race):Player(name, race, 200, 0){

}
string Warrior::attack(){
    string message = " I will destroy you with my sword, foul demon!";
    return message;
}
