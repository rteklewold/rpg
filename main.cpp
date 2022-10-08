#include "player.h"
#include "priest.h"
#include "mage.h"
#include "warrior.h"
#include <vector>

int selectProfession();
Race identifyRace(int raceChoice);
int main(){
    vector <Player*> playerPtrs;
    int raceChoice;
    string nameChoice;
    int choice = selectProfession();
    while(choice!=4){
        cout << "Please enter the name of your character: " <<endl;
        cin >> nameChoice;
        cout << "Please choose race of your character: " <<endl;
        cout << "\t" << " 1: Human " << "2: Elf " << " 3: Dwarf " << " 4: Orc " << " 5: Troll "<<endl;
        cin >> raceChoice;
        if(choice==1){
            playerPtrs.push_back(new Priest(nameChoice, identifyRace(raceChoice)));
        }
        else if(choice==2){
            playerPtrs.push_back(new Warrior(nameChoice, identifyRace(raceChoice)));
        }
        else if(choice==3){
            playerPtrs.push_back(new Mage(nameChoice, identifyRace(raceChoice)));
        }

        int choice2 = selectProfession();
        choice = choice2;

    }
    for(unsigned long i=0;i<playerPtrs.size();i++){
        cout << " I am a " << playerPtrs[i]->whatRace() << " and my attack is: " << playerPtrs[i]->attack() <<endl;
    }
    for(unsigned long i=0;i<playerPtrs.size();i++){
        delete playerPtrs[i];
        playerPtrs[i] = nullptr;
    }

}

int selectProfession(){
    int choice;
    cout << "Please choose your profession or exit if you are done: " <<endl;
    cout << "\t" << " 1: Priest "<<endl;
    cout << "\t" << " 2: Warrior "<<endl;
    cout << "\t" << " 3: Mage "<<endl;
    cout << "\t" << " 4: Exit "<<endl;
    cin >> choice;
    return choice;
}
Race identifyRace(int raceChoice){
    Race raceValue=Human;
    if(raceChoice==1){
       raceValue = Human;
    }
    else if(raceChoice==2){
       raceValue = Elf;
    }
    else if(raceChoice==3){
       raceValue = Dwarf;
    }
    else if(raceChoice==4){
       raceValue = Orc;
    }
    else if(raceChoice==5){
       raceValue = Troll;
    }
    return raceValue;
}
