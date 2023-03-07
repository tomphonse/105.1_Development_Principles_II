#include "Utils.h"


float Utils::enterInput(int maxNum) {

    while (1) {
        std::cout << "\n\tEnter Input: ";
        std::cin >> userInput;

        try { //try catch to stop program from crashing if input is not an int
            if (std::stof(userInput) > 0 && std::stof(userInput) <= maxNum) {
                return std::stof(userInput);
            }

            else if (std::stof(userInput) > 0 && maxNum == 0) {
                return std::stof(userInput);
            }

            else {
                std::cout << "\nPlease enter a correct input...\n\n";

            }

        }
        catch (...) {
            std::cout << "\nPlease enter a correct input...\n\n";
        }
    }
}
