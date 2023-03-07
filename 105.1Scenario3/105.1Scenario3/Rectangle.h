#pragma once
#include "Shapes.h"

class Rectangle : public Shapes
{
private:

public:

	void menu() override;
	void generateShape() override;
	void calculateArea() override;
	void calculatePerimeter() override;


};

