#include "Square.h"

void Square::menu() {

	bool finish = false;

	while (!finish) {
		std::cout << "\n\n\n\n";
		std::cout << "Square Calculator\n\n";
		generateShape();
		std::cout << "\n\n\n";
		std::cout << "1. Area (Area = base * base sq.units)\n";
		std::cout << "2. Perimeter (Perimeter = 4 * base sq.units)\n";
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

void Square::generateShape() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

}

void Square::calculateArea() {

	std::cout << "\n\nAREA\n";
	std::cout << "Please enter the side of the square in centimeters: ";
	float area = getUtils().enterInput(0);
	area = area * area;

	std::cout << "\n\nResult: " << area << "sq.cm\n\n";

	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}

void Square::calculatePerimeter() {


	std::cout << "\n\PERIMETER\n";
	std::cout << "Please enter the side of the square in centimeters: ";
	float perimeter = getUtils().enterInput(0);
	perimeter = perimeter * 4;

	std::cout << "\n\nResult: " << perimeter << "sq.cm\n\n";

	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}
