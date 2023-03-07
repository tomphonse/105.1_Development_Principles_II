#pragma once
#include <iostream>
#include <string>

enum Race {
	HUMAN,
	ELF,
	DWARF,
	ORC,
	TROLL
};

class Player
{
private:

	std::string name;
	int hitPoints;
	int magicPoints;
	Race race;

public:
	
	//constructor
	Player();
	Player(std::string name, int hitPoints, int magicPoints, Race race);

	std::string attack();

	//getters
	std::string getName();
	int getHitPoints();
	int getMagicPoints();
	Race getRace();
	std::string whatRace(); //returns race name string from getRace() enum getter in switch case

	//setters
	void setName(std::string name);
	void setHitPoints(int hitpoints);
	void setMagicPoints(int magicPoints);
	void setRace(Race race);


};




