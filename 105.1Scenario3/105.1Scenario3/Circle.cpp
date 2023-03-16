#include "Circle.h"

//menu for selecting to calculate area or perimeter or going back to main menu
void Circle::menu() {

	bool finish = false; //exits menu if true

	while (!finish) { //menu loop until Exit menu option selections
		std::cout << "\n\n\n\n";
		std::cout << "Circle Calculator\n\n";
		generateShape(); //ascii shape
		std::cout << "\n\n\n";
		std::cout << "1. Area (Area = pi * radius^2 sq.units)\n";
		std::cout << "2. Perimeter (Perimeter = pi * (radius * 2) sq.units)\n";
		std::cout << "3. Exit (Go back to main menu)\n";

		switch (int i = utils::enterInput(3)) { //gets user's input and selects corresponding function with selected menu option or exits if 3

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
void Circle::generateShape() {

	//height and width of the circle, width is twice the size of height to account for console line spacing
	int height = 6;
	int width = 12;

	//Loop over each row(y) and column(x)
	for (int y = 0; y <= height; y++) {
		for (int x = 0; x <= width; x++) {

			//Calculate the distance from the current point to the center of the circle using the distance formula
			double d = std::sqrt(pow((x - width / 2.0) / (width / 2.0), 2) + pow((y - height / 2.0) / (height / 2.0), 2));

			//If the distance is less than or equal to 1.1, print an asterisk
			//1.1 is an arbitrary number chosen to create a visually appealing circle shape
			if (d <= 1.1) {
				std::cout << "*";
			}
			// Else, print a space
			else {
				std::cout << " ";
			}
		}
		//Go down a row
		std::cout << "\n";
	}
}

//calculates the shape's area and displays result
void Circle::calculateArea() {

	std::cout << "\n\nAREA\n";
	std::cout << "Please enter the radius of the circle in centimeters: ";
	float radius = utils::enterInput(0); //get user input

	float area = 3.14159 * std::pow(radius, 2); //calculate result

	std::cout << "\n\nResult: " << area << "sq.cm\n\n"; //display result

	//confirmation input
	std::cout << "Enter 1 to go back: ";
	utils::enterInput(1);

}

//calculates the shape's perimeter (aka circumference) and displays result
void Circle::calculatePerimeter() {

	std::cout << "\n\PERIMETER\n";
	std::cout << "Please enter radius of the circle in centimeters: ";
	float radius = utils::enterInput(0); //get user input

	float perimeter = 3.14159 * (radius * 2); //calculates result

	std::cout << "\n\nResult: " << perimeter << "sq.cm\n\n"; //displays result

	//confirmation input
	std::cout << "Enter 1 to go back: ";
	utils::enterInput(1);

}
