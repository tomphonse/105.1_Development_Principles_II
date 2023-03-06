#pragma once
#include <iostream>
#include <string>
#include "Utils.h"

class Location
{
private:

	int degreesLong;
	float minutesLong;
	char directionLong;

	int degreesLatt;
	float minutesLatt;
	char directionLatt;

	std::string longitude = "";
	std::string latitude = "";

	Utils* utils;
	
public:

	//constructor
	
	Location(Utils& utils);

	void get_pos();
	void display();


};

