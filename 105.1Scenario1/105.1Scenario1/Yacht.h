#pragma once
#include <iostream>
#include "Location.h"

class Yacht
{
private:
	
	int yachtNum;
	Location* location;

public:

	//constructor
	Yacht(int yachtNum);

	//getter
	int getYachtNum();
	Location& getLocation();




};

