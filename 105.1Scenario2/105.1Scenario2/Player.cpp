#include "Player.h"


//constructor
Player::Player() {};
Player::Player(std::string name, int hitPoints, int magicPoints, Race race) {
	this->name = name;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
	this->race = race;

}

void Player::attack() {
	std::cout << getAttackStr();
}

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

Race Player::getRace() {
	return race;
}

std::string Player::whatRace() {

	switch (getRace()) {
	
	case HUMAN: 
		return "Human";
		break;

	case DWARF:
		return "Dwarf";
		break;

	case ELF:
		return "Elf";
		break;

	case ORC: 
		return "Orc";
		break;

	case TROLL:
		return "Troll";
		break;

	default:
		return "No race?!?";
		break;

	}
	
}

std::string Player::getAttackStr() {
	return attackStr;
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

void Player::setAttackStr(std::string attackStr) {
	this->attackStr = attackStr;
}


