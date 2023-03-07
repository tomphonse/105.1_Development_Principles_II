#pragma once
#include "Shapes.h"
class Square : public Shapes
{
private:

public:

	void menu() override;
	void generateShape() override;
	void calculateArea() override;
	void calculatePerimeter() override;

};

