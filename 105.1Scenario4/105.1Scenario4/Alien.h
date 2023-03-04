#pragma once
class Alien
{
private:
	int instanceNum;
	float weight;
	float height;
	bool isFemale;
	float prestige;

public:

	//constructor
	Alien();

	//getters
	int getInstanceNum();
	float getWeight();
	float getHeight();
	bool getSex();
	float getPrestige();

	//setters
	void setInstanceNum(int instanceNum);
	void setWeight(float weight);
	void setHeight(float height);
	void setSex(bool isFemale);
	void setPrestige();

};

