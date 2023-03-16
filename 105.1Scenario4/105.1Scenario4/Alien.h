#include <iostream>
#include "Utils.h"

class Alien {

private:

	float height; //height as feet
	float weight; //weight as kgs
	bool isFemale; //bool for sex used for logic
	char sex; //char for sex used for console output
	int prestige; //prestige calculated from previous vars
	std::string name; //display name

public:
	
	//constructor
	Alien(); //default constructor
	Alien(float weight, float height, bool isFemale); //constructor with params
	


	//getters
	float getHeight();
	float getWeight();
	bool getIsFemale();
	int getPrestige();
	char getSex();
	std::string getName();

	std::string showStats(); //gives back string of all stats for console output



	//operator overloads
	Alien operator+(const Alien& alien); //breeding

	//comparing prestige
	bool operator==(const Alien& alien); //isEqual?
	bool operator!=(const Alien& alien); //!isEqual
	bool operator>(const Alien& alien); //greaterThan
	bool operator>=(const Alien& alien); //greaterThan or Equal
	bool operator<(const Alien& alien); //lessThan
	bool operator<=(const Alien& alien); //lessthan or equal


};