#include "Triangle.h"

//menu for selecting to calculate area or perimeter or going back to main menu
void Triangle::menu() {

	bool finish = false; //exits menu if true

	while (!finish) { //menu loop until Exit menu option selected
		std::cout << "\n\n\n\n";
		std::cout << "Triangle Calculator\n\n";
		generateShape(); //ascii shape
		std::cout << "\n\n\n";
		std::cout << "1. Area (Area = (base x height) / 2 sq.units)\n";
		std::cout << "2. Perimeter (Perimeter = side1 + side2 + side3 sq.units)\n";
		std::cout << "3. Exit (Go back to main menu)\n";

		switch (int i = getUtils().enterInput(3)) { //gets user's input and selects corresponding function with selected menu option or exits if 3

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

//generates ascii shape
void Triangle::generateShape() {

	// Loop over each row of the triangle
	for (int i = 1; i < 6; i++) {

		// Generate spaces to align the asterisks in the center of each row
		for (int j = 1; j <= 6 - i; j++) {
			std::cout << " ";
		}

		// Generate asterisks that make up the actual triangle
		for (int k = 1; k <= 2 * i - 1; k++) {
			std::cout << "*";
		}

		// Move output to the next line after each row is printed
		std::cout << "\n";

	}
}

//calculates the shape's area and displays result
void Triangle::calculateArea() {

	std::cout << "\n\nAREA\n";
	std::cout << "Please enter the base of the triangle in centimeters: ";
	float base = getUtils().enterInput(0); //get user input
	std::cout << "Please enter the height of the triangle in centimeters: ";
	float height = getUtils().enterInput(0); //get user input

	float area = (base * height) / 2; //calculating result

	std::cout << "\n\nResult: " << area << "sq.cm\n\n"; //displays result

	//confirmation input
	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}

//calculates the shape's perimeter and displays result
void Triangle::calculatePerimeter() {

	std::cout << "\n\PERIMETER\n";
	std::cout << "Please enter side 1 of the triangle in centimeters: ";
	float side1 = getUtils().enterInput(0); //get user input
	std::cout << "Please enter side 2 of the triangle in centimeters: ";
	float side2 = getUtils().enterInput(0); //get user input
	std::cout << "Please enter side 3 of the triangle in centimeters: ";
	float side3 = getUtils().enterInput(0); //get user input

	float perimeter = side1 + side2 + side3; //calculates result

	std::cout << "\n\nResult: " << perimeter << "sq.cm\n\n"; //displays result

	//confirmation input
	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}
