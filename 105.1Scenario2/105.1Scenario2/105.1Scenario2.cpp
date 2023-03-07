// 105.1Scenario2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"


bool correctInput; //used for inner loops for each character creation section
bool finish = false; //exits main program loop upon true
std::string userInput; //holds user input

//vectors for each character seperated by class
std::vector<Warrior*> warriorList;
std::vector<Priest*> priestList;
std::vector<Mage*> mageList;

//enum to see what the currently selectd class is
enum SelectedClass {
    WARRIOR,
    PRIEST,
    MAGE
};

SelectedClass selectedClass;

//to get the user's input and check if its valid
int EnterInput(int maxNum) {
    
    correctInput = false;

    std::cout << "\n\tEnter Input: ";
    std::cin >> userInput;

    try { //try catch to stop program from crashing if input is not an int
        if (std::stoi(userInput) <= maxNum && std::stoi(userInput) > 0) {
            correctInput = true;
            return std::stoi(userInput);
        }
    }
    catch (...) {
        std::cout << "\n\n\n\n\n";
        return 0;
    }
    
}


//returns the selected class instance we are editing throughout the chracter creation process
Player* getSelectedClass() {
    switch (selectedClass) {
    case WARRIOR:
        return warriorList[warriorList.size() - 1];
        break;

    case PRIEST:
        return priestList[priestList.size() - 1];
        break;

    case MAGE:
        return mageList[mageList.size() - 1];
        break;
    }

}


int main()
{
  
    //main loop
    while (1) {
        std::cout << "\n\n\n\n";
        //class selection
        correctInput = false;
        while (!correctInput) { //loops until acceptable output from EnterInput()
            std::cout << "\tCHARACTER CREATION\n";
            std::cout << "\t\tWhich of the following would you like to create?\n";
            std::cout << "\t1. Create a Warrior!\n";
            std::cout << "\t2. Create a Priest!\n";
            std::cout << "\t3. Create a Mage!\n";
            std::cout << "\t4. Finish creating characters.\n";
            
            switch(EnterInput(4)) { //creating new class instance and sets the selected class
                case 1: //warrior
                    warriorList.push_back(new Warrior);
                    selectedClass = WARRIOR;
                    break;

                case 2: //Priest
                    priestList.push_back(new Priest);
                    selectedClass = PRIEST;
                    break;

                case 3: //Mage
                    mageList.push_back(new Mage);
                    selectedClass = MAGE;
                    break;

                case 4: //Finish Creating Characters

                    finish = true;

                    break;

                default:

                    break;

            }
        }
        if (finish) { //breaks main loop 
            break;
        }

        std::cout << "\n\n\n";

        //Race Selection
        correctInput = false;
        while (!correctInput) { //loops until acceptable output from EnterInput()
            std::cout << "\tSELECT RACE\n";
            std::cout << "\t1. Human\n";
            std::cout << "\t2. Elf\n";
            std::cout << "\t3. Dwarf\n";
            std::cout << "\t4. Orc\n";
            std::cout << "\t5. Troll\n";

            switch (EnterInput(5)) { //sets race for selected class from getSelectedClass()
                
            case 1: //Human
                getSelectedClass()->setRace(HUMAN);
                break;

            case 2: // Elf
                getSelectedClass()->setRace(ELF);
                break;

            case 3: //Dwarf
                getSelectedClass()->setRace(DWARF);
                break;

            case 4: //orc
                getSelectedClass()->setRace(ORC);
                break;

            case 5: //troll
                getSelectedClass()->setRace(TROLL);
                break;

            default:

                break;
            }
        }

        std::cout << "\n\n\n";

        //Name Input
        std::cout << "\tNAME\n";
        std::cout << "\tGive your player a name: ";
        std::cin >> userInput;
        getSelectedClass()->setName(userInput);

    }

    //character creation complete screen
    //loops through character class vectors displaying their variables 
    //listing all warriors
    if (warriorList.size() > 0) {
        std::cout << "\n\n\n";
        std::cout << "\t\tWARRIORS LIST\n\n";
        for (int i = 0; i < warriorList.size(); i++) {
            std::cout << "I am a " << warriorList[i]->whatRace() << " Warrior, my name is " << warriorList[i]->getName() << " and " << warriorList[i]->attack() << "\n";
        }
    }

    //listing all priests
    if (priestList.size() > 0) {
        std::cout << "\n\n\n";
        std::cout << "\t\tPRIEST LIST\n\n";
        for (int i = 0; i < priestList.size(); i++) {
            std::cout << "I am a " << priestList[i]->whatRace() << " Priest, my name is " << priestList[i]->getName() << " and " << priestList[i]->attack() << "\n";
        }
    }

    //listing all mages
    if (mageList.size() > 0) {
        std::cout << "\n\n\n";
        std::cout << "\t\tMAGE LIST\n\n";
        for (int i = 0; i < mageList.size(); i++) {
            std::cout << "I am a " << mageList[i]->whatRace() << " Mage, my name is " << mageList[i]->getName() << " and " << mageList[i]->attack() << "\n";
        }
    }

    std::cout << "\n\n\n\t\tCHARACTER CREATION COMPLETE!!!";
    
}
