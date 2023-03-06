#include "Utils.h"

float Utils::userInputNum(int minNum, int maxNum) {
	while (1) {
		std::cin >> userInput;

		try {
			if (std::stof(userInput) >= minNum && std::stof(userInput) <= maxNum) {
				return std::stof(userInput);
				break;
			}
			else {
				std::cout << "\n\nPlease input a valid number\n\n";
				std::cout << "Enter Input: ";
			}
		}
		catch (...) {
			std::cout << "\n\nPlease input a valid number\n\n";
			std::cout << "Enter Input: ";
		}
	}
}

char Utils::userInputChar(bool isLong) {
	
	while (1) {
		std::cin >> userInput;

		if (userInput.size() != 1 || validChars.find(userInput[0]) == std::string::npos) { //wrong input
			std::cout << "\n\nPlease input a valid char\n\n";
			std::cout << "Enter Input: ";
		}

		else {

			if (isLong && validCharsLong.find(userInput[0]) != std::string::npos) {
				return userInput[0];

			}

			else if (!isLong && validCharsLatt.find(userInput[0]) != std::string::npos)  {
				return userInput[0];
			}

			else { //wrong input
				std::cout << "\n\nPlease input a valid char\n\n";
				std::cout << "Enter Input: ";
			}

		}
	}
}
