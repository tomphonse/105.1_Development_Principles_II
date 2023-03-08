#pragma once
#include <iostream>
#include "Utils.h"

//main base class
class Shapes
{

private:

	Utils utils; //utils instance that all children can use with getUtils() getter

public:

	virtual void menu() = 0; //menu for selecting to calculate area or perimeter or going back to main menu
	virtual void generateShape() = 0; //generates ascii shape
	virtual void calculateArea() = 0; //calculates the shape's area and displays result
	virtual void calculatePerimeter() = 0; //calculates the shape's perimeter and displays result

	Utils getUtils(); //getter for Utils utils instance


};

