#pragma once
#include <iostream>
#include "Utils.h"


class Shapes
{

private:

	Utils utils;

public:

	virtual void menu() = 0;
	virtual void generateShape() = 0;
	virtual void calculateArea() = 0;
	virtual void calculatePerimeter() = 0;

	Utils getUtils();


};

