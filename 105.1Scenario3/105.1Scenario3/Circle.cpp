#include "Circle.h"

void Circle::menu() {

	bool finish = false;

	while (!finish) {
		std::cout << "\n\n\n\n";
		std::cout << "Circle Calculator\n\n";
		generateShape();
		std::cout << "\n\n\n";
		std::cout << "1. Area (Area = pi * radius^2 sq.units)\n";
		std::cout << "2. Perimeter (Perimeter = pi * (radius * 2) sq.units)\n";
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

void Circle::generateShape() {

	int height = 6;
	int width = 12;

	for (int y = 0; y <= height; y++) {
		for (int x = 0; x <= width; x++) {
			double d = std::sqrt(pow((x - width / 2.0) / (width / 2.0), 2) + pow((y - height / 2.0) / (height / 2.0), 2));
			if (d <= 1.1) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
	
}

void Circle::calculateArea() {

	std::cout << "\n\nAREA\n";
	std::cout << "Please enter the radius of the circle in centimeters: ";
	float radius = getUtils().enterInput(0);

	float area = 3.14159 * std::pow(radius, 2);

	std::cout << "\n\nResult: " << area << "sq.cm\n\n";

	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}

void Circle::calculatePerimeter() {


	std::cout << "\n\PERIMETER\n";
	std::cout << "Please enter radius of the circle in centimeters: ";
	float radius = getUtils().enterInput(0);

	float perimeter = 3.14159 * (radius * 2);

	std::cout << "\n\nResult: " << perimeter << "sq.cm\n\n";

	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}
