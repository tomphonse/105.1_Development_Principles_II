#include <iostream>
#include "Utils.h"

class Alien {

private:

	float height;
	float weight;
	bool isFemale;
	char sex;
	int prestige;
	std::string name;
	Utils utils;

public:
	
	Alien();
	Alien(float weight, float height, bool isFemale);
	


	//getters
	float getHeight();
	float getWeight();
	bool getIsFemale();
	int getPrestige();
	char getSex();
	std::string getName();

	std::string showStats();



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