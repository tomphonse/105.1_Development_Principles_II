#pragma once
#include <iostream>
class Player
{
private:
	std::string name;
	int hitPoints;
	int magicPoints;
	enum Race {
		HUMAN,
		ELF,
		DWARF,
		ORC,
		TROLL
	};
	Race race;


public:

	//constructor
	Player(std::string name, int hitPoints, int magicPoints, Race race);

	void attack();

	//getters
	std::string getName();
	int getHitPoints();
	int getMagicPoints();
	Race getRace();

	//setters
	void setName(std::string name);
	void setHitPoints(int hitpoints);
	void setMagicPoints(int magicPoints);
	void setRace(Race race);


};

