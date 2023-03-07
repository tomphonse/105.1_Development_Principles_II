#include "Location.h"

//constructor
Location::Location() {} //default constructor

Location::Location(int yachtNum) { //constructor that takes in yacht's num for the get_pos text

	this->yachtNum = yachtNum;

}




//setter
//sets all the location long and lat variables using utils functions for validity and error checking
void Location::get_pos() {
	
	std::cout << "Enter the Location of ship " << yachtNum <<"\n";

	//longitude
	std::cout << "Longitude: Input degrees between 0 and 180: ";
	degreesLong = utils.userInputNum(0, 180);
	
	std::cout << "\nLongitude: Input minutes between 0 and 60: ";
	minutesLong = utils.userInputNum(0, 60);

	std::cout << "\nLongitude: Input longitude direction (E/W) : ";
	directionLong = utils.userInputChar(true);

	longitude = std::to_string(degreesLong) + '\xF8' + utils.removeZeroes(minutesLong) + ' ' + directionLong + " Longitude"; //stores all the vars as a string

	//latitude
	std::cout << "\n\nLatitude: Input degrees between 0 and 180: ";
	degreesLatt = utils.userInputNum(0, 180);

	std::cout << "\nLatitude: Input minutes between 0 and 60: ";
	minutesLatt = utils.userInputNum(0, 60);

	std::cout << "\nLatitude: Input latitude direction (N/S) : ";
	directionLatt = utils.userInputChar(false);

	latitude = std::to_string(degreesLatt) + '\xF8' + utils.removeZeroes(minutesLatt) +' ' + directionLatt + " Latitude"; //stores all the vars as a string

}

//displays the longitude and latitude strings
void Location::display() {
	std::cout << latitude << " " << longitude;
}





