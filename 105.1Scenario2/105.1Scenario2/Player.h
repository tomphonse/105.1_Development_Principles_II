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

	std::string attackStr;
	
	


public:
	

	

	//constructor
	Player();
	Player(std::string name, int hitPoints, int magicPoints, Race race);

	void attack();

	//getters
	std::string getName();
	int getHitPoints();
	int getMagicPoints();
	Race getRace();

	std::string whatRace();

	std::string getAttackStr();

	//setters
	void setName(std::string name);
	void setHitPoints(int hitpoints);
	void setMagicPoints(int magicPoints);
	void setRace(Race race);

	void setAttackStr(std::string attackStr);


};




