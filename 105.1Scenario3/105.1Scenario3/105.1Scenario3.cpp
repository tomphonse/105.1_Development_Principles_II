// 105.1Scenario3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Utils.h"
#include "Shapes.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"


Shapes* shapeList[4] = { new Square, new Rectangle, new Triangle, new Circle }; //creating and storing all possible shapes in an array that we can call elements of inside of our main menu

int main()
{
    //main program loop
    while(1) {

        //main menu
        std::cout << "\n\n\nSHAPES CALCULATOR\n\n";
        std::cout << "1. Square\n";
        std::cout << "2. Rectangle\n";
        std::cout << "3. Triangle\n";
        std::cout << "4. Circle\n";
        std::cout << "5. Exit\n";

        int userInput = utils::enterInput(5); //gets user's input with validity check and stores it

        if (userInput == 5) { //exits program if exit selected
            break;
        }
        else {
            shapeList[userInput - 1]->menu(); //selects derived shape from array using corresponding user input and runs overidden menu function
        }
    }
}

