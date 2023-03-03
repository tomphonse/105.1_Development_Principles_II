// 105.1Scenario2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


bool correctInput;
bool finish = false;
std::string userInput;


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

int main()
{

    //testing




    //main loop
    while (!finish) {

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

                    break;

                case 2: //Priest

                    break;

                case 3: //Mage

                    break;

                case 4: //Finish Creating Characters

                    finish = true;

                    break;

                default:

                    break;

            }
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

                break;

            case 2: // Elf

                break;

            case 3: //Dwarf

                break;

            case 4: //orc

                break;

            case 5: //troll

                break;

            default:

                break;
            }
        }

        std::cout << "\n\n\n";

        //Name Input
        std::cout << "\tNAME\n";
        std::cout << "\tGive your player a name: ";
    }
    
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
