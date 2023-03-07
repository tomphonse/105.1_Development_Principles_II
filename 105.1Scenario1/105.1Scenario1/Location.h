#pragma once
#include <iostream>
#include <string>
#include "Utils.h"

class Location
{
private:

	//longitude vars
	int degreesLong;
	float minutesLong;
	char directionLong;
	std::string longitude = "";

	//latitude vars
	int degreesLatt;
	float minutesLatt;
	char directionLatt;	
	std::string latitude = "";

	//yacht vars
	int yachtNum;

	//utils
	Utils utils;

	
public:

	//constructor
	Location();
	Location(int yachtNum);

	//settter
	void get_pos();
	
	//couts the longitude and latitude
	void display();


};

