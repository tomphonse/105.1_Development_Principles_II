#pragma once
#include <iostream>
#include <string>

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

	//utility vars
	std::string userInput;
	const std::string validChars = "NnEeSsWw"; //North East South West
	const std::string validCharsLong = "EeWw"; //East West
	const std::string validCharsLatt = "NnSs"; //North South

	//yacht vars
	int yachtNum;
	
public:

	//constructor
	Location();
	Location(int yachtNum);

	//getter & settter
	void get_pos();
	void display();

	//utility funcs
	float userInputNum(int minNum, int maxNum);
	char userInputChar(bool isLong);
	std::string removeZeroes(float f);


};

