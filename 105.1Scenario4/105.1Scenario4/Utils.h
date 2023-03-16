#pragma once
#include <iostream>
#include <string>
#include <vector>
namespace utils
{


	int enterInput(int maxNum); //to get the user's input and check if its valid, takes int which is the maximum acceptable value of the user's input, if set to 0 their is no limit
	std::string boolStr(bool boolean);//returns string that says "True" or "False


	float getRandomFloat(float min, float max); //returns random floating point number between min and max params

	std::string getRandomName(); //returns a procedurally generated name

	std::string setPrecision(float f, int precision); //sets the precision of a float and returns it as a string, second param is number of precision placements you want

};



