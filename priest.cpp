#include "priest.h"

Priest::Priest(string name, Race race):Player(name, race, 200, 0){

}
string Priest::attack(){
    string message = " I will assault you with Holy Wrath!";
    return message;
}
