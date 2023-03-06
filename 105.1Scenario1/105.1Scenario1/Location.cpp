#include "Location.h"

//constructor
Location::Location() {}

Location::Location(int yachtNum) {

	this->yachtNum = yachtNum;

}




//setter
void Location::get_pos() {
	
	std::cout << "Enter the Location of ship " << yachtNum <<"\n";

	//longitude
	std::cout << "Longitude: Input degrees between 0 and 180: ";
	degreesLong = userInputNum(0, 180);
	
	std::cout << "\nLongitude: Input minutes between 0 and 60: ";
	minutesLong = userInputNum(0, 60);

	std::cout << "\nLongitude: Input longitude direction (E/W) : ";
	directionLong = userInputChar(true);

	longitude = std::to_string(degreesLong) + '\xF8' + removeZeroes(minutesLong) + ' ' + directionLong + " Longitude";

	//latitude
	std::cout << "\n\nLatitude: Input degrees between 0 and 180: ";
	degreesLatt = userInputNum(0, 180);

	std::cout << "\nLatitude: Input minutes between 0 and 60: ";
	minutesLatt = userInputNum(0, 60);

	std::cout << "\nLatitude: Input latitude direction (N/S) : ";
	directionLatt = userInputChar(false);

	latitude = std::to_string(degreesLatt) + '\xF8' + removeZeroes(minutesLatt) +' ' + directionLatt + " Latitude";
	latitude = latitude;

}

//getter
void Location::display() {
	std::cout << latitude << " " << longitude;
}



//utility funcs
float Location::userInputNum(int minNum, int maxNum) {
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

char Location::userInputChar(bool isLong) {

	while (1) {
		std::cin >> userInput;
		userInput = toupper(userInput[0]);

		if (isLong && validCharsLong.find(userInput[0]) != std::string::npos) {
			return userInput[0];

		}

		else if (!isLong && validCharsLatt.find(userInput[0]) != std::string::npos) {
			return userInput[0];
		}

		else { //wrong input
			std::cout << "\n\nPlease input a valid char\n\n";
			std::cout << "Enter Input: ";
		}
	}
}

std::string Location::removeZeroes(float f) {

	std::string str = std::to_string(f);
	str.erase(str.find_last_not_of('0') + 1, std::string::npos);
	if (str.back() == '.') { str.pop_back(); }
	return str;
}


