#pragma once
#include <iostream>
#include <string>

class Utils
{
private:
	std::string userInput; //holds the user's input in the enterInput() function

public:

	float enterInput(int maxNum); //to get the user's input and check if its valid, takes int which is the maximum acceptable value of the user's input, if set to 0 their is no limit

};

