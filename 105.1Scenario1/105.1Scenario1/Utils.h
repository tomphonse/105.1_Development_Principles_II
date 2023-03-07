#pragma once
#include <iostream>
#include <string>

class Utils
{

private:

	//utility vars
	std::string userInput; //stores the user input
	const std::string validCharsLong = "EeWw"; //East West
	const std::string validCharsLatt = "NnSs"; //North South

public:

	//utility funcs
	float userInputNum(int minNum, int maxNum); //gets user's input for a number, takes params of the min and max num, returns as float 
	char userInputChar(bool isLong); //gets user's input for a char, isLong checks if its "EeWw", !isLong checks if its "NnSs"
	std::string removeZeroes(float f); //takes float and removes trailing zeroes, returns as string



};

