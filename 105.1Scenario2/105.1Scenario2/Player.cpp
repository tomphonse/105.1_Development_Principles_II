#include "Player.h"

//getters
std::string Player::getName() {
	return name;
}

int Player::getHitPoints() {
	return hitPoints;
}

int Player::getMagicPoints() {
	return magicPoints;
}

Player::Race Player::getRace() {
	return race;
}

//setters
void Player::setName(std::string name) {
	this->name = name;
}

void Player::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
}

void Player::setMagicPoints(int magicPoints) {
	this->magicPoints = magicPoints;
}

void Player::setRace(Race race) {
	this->race = race;
}


//constructor
Player::Player (std::string name, int hitPoints, int magicPoints, Race race) {
	this->name = name;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
	setRace(race);

}
