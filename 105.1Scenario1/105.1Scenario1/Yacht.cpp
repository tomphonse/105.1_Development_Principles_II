#include "Yacht.h"

//constructor
Yacht::Yacht(int yachtNum) {
	this->yachtNum = yachtNum;
	location = new Location(yachtNum); //replaces location instance declared in a header with new location using yachtNum constructor
}

//getter
int Yacht::getYachtNum() {
	return yachtNum;
}

//getter
Location& Yacht::getLocation() {
	return *location;
}
