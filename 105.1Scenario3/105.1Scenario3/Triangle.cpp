#include "Triangle.h"

void Triangle::menu() {

	bool finish = false;

	while (!finish) {
		std::cout << "\n\n\n\n";
		std::cout << "Triangle Calculator\n\n";
		generateShape();
		std::cout << "\n\n\n";
		std::cout << "1. Area (Area = (base x height) / 2 sq.units)\n";
		std::cout << "2. Perimeter (Perimeter = side1 + side2 + side3 sq.units)\n";
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

void Triangle::generateShape() {

	for (int i = 1; i < 6; i++) {

		for (int j = 1; j <= 6 - i; j++) {
			std::cout << " ";
		}

		for (int k = 1; k <= 2 * i - 1; k++) {
			std::cout << "*";
		}

		std::cout << "\n";

	}

}

void Triangle::calculateArea() {

	std::cout << "\n\nAREA\n";
	std::cout << "Please enter the base of the triangle in centimeters: ";
	float base = getUtils().enterInput(0);
	std::cout << "Please enter the height of the triangle in centimeters: ";
	float height = getUtils().enterInput(0);

	float area = (base * height) / 2;

	std::cout << "\n\nResult: " << area << "sq.cm\n\n";

	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}

void Triangle::calculatePerimeter() {


	std::cout << "\n\PERIMETER\n";
	std::cout << "Please enter side 1 of the triangle in centimeters: ";
	float side1 = getUtils().enterInput(0);
	std::cout << "Please enter side 2 of the triangle in centimeters: ";
	float side2 = getUtils().enterInput(0);
	std::cout << "Please enter side 3 of the triangle in centimeters: ";
	float side3 = getUtils().enterInput(0);

	float perimeter = side1 + side2 + side3;

	std::cout << "\n\nResult: " << perimeter << "sq.cm\n\n";

	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}
