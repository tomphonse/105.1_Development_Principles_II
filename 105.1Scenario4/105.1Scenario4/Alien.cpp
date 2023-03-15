#include "Alien.h"


//constructors 

Alien::Alien() {}
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

	//select Random Name
	name = utils.getRandomName();

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
std::string Alien::getName() {
	return name;
}

std::string Alien::showStats() {

	return "NAME: " + name + " | HEIGHT: " + utils.setPrecision(height, 1) + "ft | WEIGHT: " + utils.setPrecision(weight, 2) + "kg | SEX: " + sex + " | PRESTIGE: " + std::to_string(prestige);
}


//operator overloads
Alien Alien::operator+(const Alien& alien) { //breeding
	

	Alien alienSpawn((this->weight + alien.weight) / 2, (this->height + alien.height) / 2, rand() % 2);
	alienSpawn.name = alienSpawn.name + "-" + alien.name;
	
	return alienSpawn;
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


