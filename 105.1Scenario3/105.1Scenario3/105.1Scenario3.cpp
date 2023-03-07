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

Utils utils;
Shapes* shapeList[4] = { new Square, new Rectangle, new Triangle, new Circle };

int main()
{
    
    while(1) {

        std::cout << "\n\n\nSHAPES CALCULATOR\n\n";
        std::cout << "1. Square\n";
        std::cout << "2. Rectangle\n";
        std::cout << "3. Triangle\n";
        std::cout << "4. Circle\n";
        std::cout << "5. Exit\n";

        int userInput = utils.enterInput(5);

        if (userInput == 5) { //exit
            break;
        }
        else {
            shapeList[userInput - 1]->menu();
        }
    }
}

