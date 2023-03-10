#include <iostream>

class Alien {

private:

	float height;
	float weight;
	bool isFemale;
	char sex;
	int prestige;

public:
	//Alien();
	Alien(float weight, float height, bool isFemale);
	


	//getters
	float getHeight();
	float getWeight();
	bool getIsFemale();
	int getPrestige();
	char getSex();


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