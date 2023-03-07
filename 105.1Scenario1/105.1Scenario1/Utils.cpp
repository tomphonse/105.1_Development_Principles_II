#include "Utils.h"


//utility funcs
//gets user's input for a number, takes params of the min and max num, returns as float
float Utils::userInputNum(int minNum, int maxNum) {
	while (1) { //loop until acceptable input
		std::cin >> userInput; 

		try { //try catch to prevent crashing if user inputs non numerical chars

			if (std::stof(userInput) >= minNum && std::stof(userInput) <= maxNum) { //check input against acceptable range
				return std::stof(userInput); //return as float
				break;
			}
			else { //wrong input (num out of range)
				std::cout << "\n\nPlease input a valid number\n\n";
				std::cout << "Enter Input: ";
			}
		}
		catch (...) { //wrong input (non acceptable char)
			std::cout << "\n\nPlease input a valid number\n\n";
			std::cout << "Enter Input: ";
		}
	}
}

//gets user's input for a char, isLong checks if its "EeWw", !isLong checks if its "NnSs"
char Utils::userInputChar(bool isLong) {

	while (1) { //loops until acceptable input
		std::cin >> userInput;
		userInput = toupper(userInput[0]); //removes all but first char 

		if (isLong && validCharsLong.find(userInput[0]) != std::string::npos) { //checks if isLong and finds if userInput contains char from validCharsLong
			return userInput[0];

		}

		else if (!isLong && validCharsLatt.find(userInput[0]) != std::string::npos) { //checks if !isLong and finds if userInput contains char from validCharsLatt
			return userInput[0];
		}

		else { //wrong input
			std::cout << "\n\nPlease input a valid char\n\n";
			std::cout << "Enter Input: ";
		}
	}
}

//takes float and removes trailing zeroes, returns as string
std::string Utils::removeZeroes(float f) {

	std::string str = std::to_string(f);
	str.erase(str.find_last_not_of('0') + 1, std::string::npos); //removes all trailing zeroes
	if (str.back() == '.') { str.pop_back(); } //if last char is a '.' remove it too (ie 1.00 to 1. to 1)
	return str; 
}


