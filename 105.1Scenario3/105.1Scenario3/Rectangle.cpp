#include "Rectangle.h"

void Rectangle::menu() {

	bool finish = false;

	while (!finish) {
		std::cout << "\n\n\n\n";
		std::cout << "Rectangle Calculator\n\n";
		generateShape();
		std::cout << "\n\n\n";
		std::cout << "1. Area (Area = base * height sq.units)\n";
		std::cout << "2. Perimeter (Perimeter = 2 * (base + height) sq.units)\n";
		std::cout << "3. Exit (Go back to main menu)\n";

		switch (int i = getUtils().enterInput(3)) {

		case 1: //area
			calculateArea();
			break;

		case 2: //perimeter
			calculatePerimeter();
			break;

		case 3: //exit
			finish = true;
			break;

		}
	}
}

void Rectangle::generateShape() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 20; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

}

void Rectangle::calculateArea() {

	std::cout << "\n\nAREA\n";
	std::cout << "Please enter the base of the rectangle in centimeters: ";
	float base = getUtils().enterInput(0);
	std::cout << "Please enter the height of the rectangle in centimeters: ";
	float height = getUtils().enterInput(0);
	
	float area = base * height;

	std::cout << "\n\nResult: " << area << "sq.cm\n\n";

	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}

void Rectangle::calculatePerimeter() {


	std::cout << "\n\PERIMETER\n";
	std::cout << "Please enter the base of the rectangle in centimeters: ";
	float base = getUtils().enterInput(0);
	std::cout << "Please enter the height of the rectangle in centimeters: ";
	float height = getUtils().enterInput(0);
	
	float perimeter = 2 * (base + height);

	std::cout << "\n\nResult: " << perimeter << "sq.cm\n\n";

	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}