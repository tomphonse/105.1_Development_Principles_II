// 105.1Scenario1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Yacht.h"


std::vector<Yacht*> yachtList;

int main()
{

    //loop for creating yacht instances and giving them location values
    for (int i = 1; i < 4; i++) {
        yachtList.push_back(new Yacht(i)); //creates yacht instance
        yachtList[i - 1]->getLocation().get_pos(); //uses get_pos location instance function inside of yacht instance
        std::cout << "\n\n";
    }

    std::cout << "\n\n";
    
    //loop through vector of Yacht instances and call their respective location instance's function display()
    for (int i = 0; i < yachtList.size(); i++) {
        std::cout << "\nShip " << yachtList[i]->getYachtNum() << " Location: \n"; //gets the yacht's number
        yachtList[i]->getLocation().display(); //displays yacht's location instance and runs display function
        std::cout << "\n";
    }
    
    
}

