#include "Yacht.h"

Yacht::Yacht(int yachtNum) {
	this->yachtNum = yachtNum;
	location = new Location(yachtNum);
}

int Yacht::getYachtNum() {
	return yachtNum;
}

Location& Yacht::getLocation() {
	return *location;
}
