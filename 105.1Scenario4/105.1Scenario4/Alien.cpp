#include "Alien.h"

//constructor
Alien::Alien() {}

//getters
int Alien::getInstanceNum() {
	return instanceNum;
}

float Alien::getWeight() {
	return weight;
}

float Alien::getHeight() {
	return height;
}

bool Alien::getSex() {
	return isFemale;
}

float Alien::getPrestige() {
	return prestige;
}

//setters
void Alien::setInstanceNum(int instanceNum) {
	this->instanceNum = instanceNum;
}

void Alien::setWeight(float weight) {
	this->weight = weight;
}

void Alien::setHeight(float height) {
	this->height = height;
}

void Alien::setSex(bool isFemale) {
	this->isFemale = isFemale;
}

void Alien::setPrestige() {
	prestige = height * weight * (isFemale + 2);
}

