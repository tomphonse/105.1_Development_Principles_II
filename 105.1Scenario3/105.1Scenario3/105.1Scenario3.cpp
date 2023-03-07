// 105.1Scenario3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Utils.h"
#include "Shapes.h"
#include "Square.h"

bool finish = false;
Utils utils;
Square square;

int main()
{
    
    while(!finish) {

        std::cout << "\n\n\nSHAPES CALCULATOR\n\n";
        std::cout << "1. Square\n";
        std::cout << "2. Rectangle\n";
        std::cout << "3. Triangle\n";
        std::cout << "4. Circle\n";
        std::cout << "5. Exit\n";

        switch (int i = utils.enterInput(5)) {

        case 1: //square

            square.menu();

            break;

        case 2: //rectangle

            break;

        case 3: //triangle

            break;

        case 4: //circle 

            break;

        case 5: //exit

            break;

        default: 

            break;
        }
    }



}

