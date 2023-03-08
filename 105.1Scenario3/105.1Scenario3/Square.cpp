#include "Square.h"

//menu for selecting to calculate area or perimeter or going back to main menu
void Square::menu() {

	bool finish = false; //exits menu if true

	while (!finish) { //menu loop until Exit menu option selections

		//calculator menu
		std::cout << "\n\n\n\n";
		std::cout << "Square Calculator\n\n";
		generateShape(); //ascii shape
		std::cout << "\n\n\n";
		std::cout << "1. Area (Area = base * base sq.units)\n";
		std::cout << "2. Perimeter (Perimeter = 4 * base sq.units)\n";
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
void Square::generateShape() {

	//loop that prints a '*' and then goes down one line to draw a square. Width is twice the size of height to accomdate for line spacing in the console
	for (int i = 0; i < 5; i++) { //rows
		for (int j = 0; j < 10; j++) { //columns
			std::cout << "*"; 
		}
		std::cout << "\n";
	}

}

//calculates the shape's area and displays result
void Square::calculateArea() {

	std::cout << "\n\nAREA\n";
	std::cout << "Please enter the side of the square in centimeters: ";
	float area = getUtils().enterInput(0); //getting user input
	area = area * area; //calculating the area
	 
	std::cout << "\n\nResult: " << area << "sq.cm\n\n"; //displaying the result

	//confirmation input
	std::cout << "Enter 1 to go back: "; 
	getUtils().enterInput(1);

}

//calculates the shape's perimeter and displays result
void Square::calculatePerimeter() {


	std::cout << "\n\PERIMETER\n";
	std::cout << "Please enter the side of the square in centimeters: ";
	float perimeter = getUtils().enterInput(0); //getting user input
	perimeter = perimeter * 4; //calculating the perimeter

	std::cout << "\n\nResult: " << perimeter << "sq.cm\n\n"; //displaying the result

	//confirmation input
	std::cout << "Enter 1 to go back: ";
	getUtils().enterInput(1);

}
