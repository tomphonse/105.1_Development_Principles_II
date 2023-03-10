#include "Alien.h"


//constructors 
Alien::Alien(float weight, float height, bool isFemale) {

	this->weight = weight;
	this->height = height;
	this->isFemale = isFemale;

	//prestige calc
	this->prestige = height * weight * (isFemale + 2);

	//setting sex char
	if (isFemale) {
		sex = 'F';
	}
	else {
		sex = 'M';
	}

}



//getters
float Alien::getHeight() {

	return height;

}
float Alien::getWeight() {
	return weight;
}
bool Alien::getIsFemale() {
	return isFemale;
}

int Alien::getPrestige() {
	return prestige;
}
char Alien::getSex() {
	return sex;
}


//operator overloads
Alien Alien::operator+(const Alien& alien) { //breeding
	
	/*int tempWeight = (this->weight + alien.weight) / 2;
	int tempHeight = (this->height + alien.height) / 2;
	bool tempIsFemale = rand() % 2;*/

	return Alien((this->weight + alien.weight) / 2, (this->height + alien.height) / 2, rand() % 2);

}

//prestige compare
bool Alien::operator==(const Alien& alien) { //isEqual

	if (this->prestige == alien.prestige) {
		return true;
	}
	else {
		return false;
	}

}

bool Alien::operator!=(const Alien& alien) { //!isEqual

	if (this->prestige != alien.prestige) {
		return true;
	}
	else {
		return false;
	}

}

bool Alien::operator>(const Alien& alien) { //GreaterThan

	if (this->prestige > alien.prestige) {
		return true;
	}
	else {
		return false;
	}

}

bool Alien::operator>=(const Alien& alien) { //GreaterThan or Equal

	if (this->prestige >= alien.prestige) {
		return true;
	}
	else {
		return false;
	}

}

bool Alien::operator<(const Alien& alien) { //LessThan

	if (this->prestige < alien.prestige) {
		return true;
	}
	else {
		return false;
	}

}

bool Alien::operator<=(const Alien& alien) { //LessThan or Equal

	if (this->prestige <= alien.prestige) {
		return true;
	}
	else {
		return false;
	}

}


