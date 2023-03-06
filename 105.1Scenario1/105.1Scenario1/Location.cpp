#include "Location.h"

Location::Location(Utils& utils) {
	this->utils = &utils;
}




void Location::get_pos() {
	
	std::cout << "Enter the Location of the first ship:\n";

	//longitude
	std::cout << "Longitude: Input degrees between 0 and 180: ";
	degreesLong = utils->userInputNum(0, 180);
	
	std::cout << "\nLongitude: Input minutes between 0 and 60: ";
	minutesLong = utils->userInputNum(0, 60);

	std::cout << "\nLongitude: Input longitude direction (E/W) : ";
	directionLong = utils->userInputChar(true);

	longitude = std::to_string(degreesLong) + '\xF8' + std::to_string(minutesLong) + ' ' + directionLong + " Longitude";

	//latitude
	std::cout << "\n\nLatitude: Input degrees between 0 and 180: ";
	degreesLatt = utils->userInputNum(0, 180);

	std::cout << "\nLatitude: Input minutes between 0 and 60: ";
	minutesLatt = utils->userInputNum(0, 60);

	std::cout << "\nLatitude: Input latitude direction (N/S) : ";
	directionLatt = utils->userInputChar(false);

	latitude = std::to_string(degreesLatt) + '\xF8' + std::to_string(minutesLatt) + ' ' + directionLatt + " Latitude";

}

void Location::display() {
	std::cout << latitude << " " << longitude;
}


