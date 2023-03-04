// 105.1Scenario4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Alien.h"

std::string userInput;
std::string continueInput;
bool correctInput;
bool finish = false;
bool pairsCreated = false;
bool offspringCreated = false;

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

void continuePrompt() {
    std::cout << "\nEnter any input to continue... ";
    std::cin >> continueInput;
}

int main()
{
    while (1) {
        std::cout << "\n\n\n\n\n";
        std::cout << "\t\tMAIN MENU\n\n";
        std::cout << "\t1. Create Alien Pairs\n";
        std::cout << "\t2. Create Offspring\n";
        std::cout << "\t3. Compare Offspring Presitge\n";
        std::cout << "\t4. Exit\n\n";

        switch (EnterInput(4)) {
            
        case 1: //create alien pairs
            if (!pairsCreated) {
                Alien alein1

            }
            else {
                std::cout << "You have already created a pair...";
                continuePrompt();
            }

            break;

        case 2: //create offspring

            break;

        case 3: //compare offspring

            break;

        case 4: //exit
            finish = true;
            break;

       }

        if (finish) { break; }
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
