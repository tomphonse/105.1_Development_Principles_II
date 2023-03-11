#pragma once
#include <iostream>
#include <string>
#include <vector>
class Utils
{

private:
	std::string userInput; //holds the user's input in the enterInput() function
	int aliensAmount;

public:

	int enterInput(int maxNum); //to get the user's input and check if its valid, takes int which is the maximum acceptable value of the user's input, if set to 0 their is no limit
	std::string boolStr(bool boolean);//returns string that says "True" or "False

	void incrementAliensAmount(); //adds one to aliensAmount
	int getAliensAmount(); //returns aliensAmount

	float getRandomFloat(float min, float max);

	std::string getRandomName();

	std::string setPrecision(float f, int precision);

};



