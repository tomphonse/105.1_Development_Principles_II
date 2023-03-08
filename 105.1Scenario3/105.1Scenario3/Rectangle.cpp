#include "Rectangle.h"


//menu for selecting to calculate area or perimeter or going back to main menu
void Rectangle::menu() {

	bool finish = false; //exits menu if true

	while (!finish) { //menu loop until Exit menu option selections

		//calculator menu
		std::cout << "\n\n\n\n";
		std::cout << "Rectangle Calculator\n\n";
		generateShape(); //ascii shape
		std::cout << "\n\n\n";
		std::cout << "1. Area (Area = base * height sq.units)\n";
		std::cout << "2. Perimeter (Perimeter = 2 * (base + height) sq.units)\n";
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
void Rectangle::generateShape() {

	//loop that prints a '*' and then goes down one line to draw a rectangle.
	for (int i = 0; i < 5; i++) { //rows
		for (int j = 0; j < 20; j++) { //columns
			std::cout << "*";
		}
		std::cout << "\n";
	}

}

//calculates the shape's area and displays result
void Rectangle::calculateArea() {

	std::cout << "\n\nAREA\n";
	std::cout << "Please enter the base of the rectangle in centimeters: ";
	float base = getUtils().enterInput(0); //getting user input
	std::cout << "Please enter the height of the rectangle in centimeters: ";
	float height = getUtils().enterInput(0); //getting user input
	
	float area = base * height; //calculating result

	std::cout << "\n\nResult: " << area << "sq.cm\n\n"; //displaying result

	//confirmation input
	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}

//calculates the shape's perimeter and displays result
void Rectangle::calculatePerimeter() {

	std::cout << "\n\PERIMETER\n";
	std::cout << "Please enter the base of the rectangle in centimeters: ";
	float base = getUtils().enterInput(0); //getting user unput
	std::cout << "Please enter the height of the rectangle in centimeters: ";
	float height = getUtils().enterInput(0); //getting user input
	
	float perimeter = 2 * (base + height); //calculating result

	std::cout << "\n\nResult: " << perimeter << "sq.cm\n\n"; //displaying result

	//confirmation input
	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}