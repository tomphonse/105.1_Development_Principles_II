#include "Utils.h"


namespace utils {

    //to get the user's input and check if its valid
    float enterInput(int maxNum) {

        std::string userInput;

        while (1) { //loop until acceptable input
            std::cout << "\n\tEnter Input: ";
            std::cin >> userInput;

            try { //try catch to stop program from crashing if input is not a float
                if (std::stof(userInput) > 0 && std::stof(userInput) <= maxNum) { //checking if user's input is between zero and the maximum accepted value
                    return std::stof(userInput); //returning user's input as float if acceptable
                }

                else if (std::stof(userInput) > 0 && maxNum == 0) { //if maxNum set to 0 there is no upper limit
                    return std::stof(userInput); //returning user's input as float if acceptable
                }

                else { //wrong input
                    std::cout << "\nPlease enter a correct input...\n\n";

                }

            }
            catch (...) { //wrong input
                std::cout << "\nPlease enter a correct input...\n\n";
            }
        }
    }
}