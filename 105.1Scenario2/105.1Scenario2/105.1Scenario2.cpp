// 105.1Scenario2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"


bool correctInput;
bool finish = false;
std::string userInput;

std::vector<Warrior*> warriorList;
std::vector<Priest*> priestList;
std::vector<Mage*> mageList;

enum SelectedClass {
    WARRIOR,
    PRIEST,
    MAGE
};

SelectedClass selectedClass;


int EnterInput(int maxNum) {
    
    correctInput = false;

    std::cout << "\n\tEnter Input: ";
    std::cin >> userInput;

    try {
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


//void setRaceMenu(Race race) {
//
//    getSelectedClass->setRace(race);
//
//
//    /*switch (selectedClass) {
//    case WARRIOR:
//        warriorList[warriorList.size() - 1]->setRace(race);
//        break;
//
//    case PRIEST:
//
//        break;
//
//    case MAGE:
//
//        break;
//    }*/
//
//}


int main()
{
  
    //main loop
    while (!finish) {
        std::cout << "\n\n\n\n";
        //class selection
        correctInput = false;
        while (!correctInput) {
            std::cout << "\tCHARACTER CREATION\n";
            std::cout << "\t\tWhich of the following would you like to create?\n";
            std::cout << "\t1. Create a Warrior!\n";
            std::cout << "\t2. Create a Priest!\n";
            std::cout << "\t3. Create a Mage!\n";
            std::cout << "\t4. Finish creating characters.\n";
            
            switch(EnterInput(4)) {
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
        if (finish) {
            break;
        }

        std::cout << "\n\n\n";

        //Race Selection
        correctInput = false;
        while (!correctInput) {
            std::cout << "\tSELECT RACE\n";
            std::cout << "\t1. Human\n";
            std::cout << "\t2. Elf\n";
            std::cout << "\t3. Dwarf\n";
            std::cout << "\t4. Orc\n";
            std::cout << "\t5. Troll\n";

            switch (EnterInput(5)) {
                
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

    //listing all warriors
    if (warriorList.size() > 0) {
        std::cout << "\n\n\n";
        std::cout << "\t\tWARRIORS LIST\n\n";
        for (int i = 0; i < warriorList.size(); i++) {
            std::cout << "I am a " << warriorList[i]->whatRace() << " Warrior" << ", my name is " << warriorList[i]->getName() << " and " << warriorList[i]->getAttackStr() << "\n";
        }
    }

    //listing all priests
    if (priestList.size() > 0) {
        std::cout << "\n\n\n";
        std::cout << "\t\tPRIEST LIST\n\n";
        for (int i = 0; i < priestList.size(); i++) {
            std::cout << "I am a " << priestList[i]->whatRace() << " Priest, my name is " << priestList[i]->getName() << " and " << priestList[i]->getAttackStr() << "\n";
        }
    }

    //listing all mages
    if (mageList.size() > 0) {
        std::cout << "\n\n\n";
        std::cout << "\t\tMAGE LIST\n\n";
        for (int i = 0; i < mageList.size(); i++) {
            std::cout << "I am a " << mageList[i]->whatRace() << " Mage, my name is " << mageList[i]->getName() << " and " << mageList[i]->getAttackStr() << "\n";
        }
    }

    std::cout << "\n\n\n\t\tCHARACTER CREATION COMPLETE!!!";
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
