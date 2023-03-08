#pragma once
#include "Shapes.h"
class Square : public Shapes
{
private:

public:

	void menu() override; //menu for selecting to calculate area or perimeter or going back to main menu
	void generateShape() override; //generates ascii shape
	void calculateArea() override; //calculates the shape's area and displays result
	void calculatePerimeter() override; //calculates the shape's perimeter and displays result

};

