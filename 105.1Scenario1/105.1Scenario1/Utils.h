#pragma once
#include <iostream>
#include <string>
class Utils
{

private:

	std::string userInput;
	const std::string validChars = "NnEeSsWw"; //North East South West
	const std::string validCharsLong = "EeWw"; //East West
	const std::string validCharsLatt = "NnSs"; //North South
	

public:

	float userInputNum(int minNum, int maxNum);

	char userInputChar(bool isLong);

};

