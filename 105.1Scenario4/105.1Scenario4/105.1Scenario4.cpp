#include <iostream>
#include <vector>
#include "Utils.h"
#include "Alien.h"


std::vector <Alien*> alienMen; //all bred and alien males from generated pairs go in here
std::vector <Alien*> alienWomen; //all bred and alien women from generated pairs go here
Alien* alienBreedingContainer[2]; //we put the two aliens we want to breed in this array 
Alien* alienCompareContainer[2]; //we put the two aliens we want to compare in this array
Alien* child = nullptr; //child spawned from alienBreedingContainer goes here before being sent to either alienMen or alienWomen vectors

bool finish = false; //program ends when true
int userInput; //holds user's input as int




int main() {

	srand(time(nullptr)); //enables proper random numbers


	//main menu 
	while (!finish) { //main loop
		std::cout << "\n\n\nMAIN MENU\n\n";
		std::cout << "1. Generate Alien Pairs\n";
		std::cout << "2. Breed Pairs\n";
		std::cout << "3. Compare Aliens\n";
		std::cout << "4. Exit\n";

		switch (utils::enterInput(4)) { //user input selection function as param for switch case state machine

		case 1: //Generate Alien Pairs
			while (1) { //loop until go back
				//generating alien pair
				alienMen.push_back(new Alien(utils::getRandomFloat(70.0f, 200.0f), utils::getRandomFloat(5.0f, 10.0f), false)); //creates random female alien
				alienWomen.push_back(new Alien(utils::getRandomFloat(40.0f, 150.0f), utils::getRandomFloat(4.0f, 8.0f), true)); //creates random male alien

				//display stats
				std::cout << "\n\n\nGENERATED ALIENS\n\n";
				std::cout << alienMen[alienMen.size() - 1]->showStats() << "\n";
				std::cout << alienWomen[alienWomen.size() - 1]->showStats() << "\n";
				
				//menu
				std::cout << "\n1.Generate More?\n";
				std::cout << "2.Go Back\n";
				userInput = utils::enterInput(2);
				if (userInput == 2) break; //go back to main menu
			}
			break;

		case 2: //Breed Pairs

			//female selection
			while (1) {
				child = nullptr;
				std::cout << "\n\n\nSELECT FEMALE ALIEN FOR BREEDING\n\n";
				//loop to list all female aliens
				for (int i = 0; i < alienWomen.size(); i++) {
					std::cout << i + 1 << ". " << alienWomen[i]->showStats() << "\n";
				}
				userInput = utils::enterInput(alienWomen.size()); //select a female alien
				alienBreedingContainer[0] = alienWomen[userInput - 1]; //adds selected female alien to the breeding container array

				//male selection
				std::cout << "\n\nFEMALE SELECTED: " << alienBreedingContainer[0]->showStats();
				std::cout << "\nSELECT MALE ALIEN TO BREED\n\n";
				//loop to list all male aliens
				for (int i = 0; i < alienMen.size(); i++) {
					std::cout << i + 1 << ". " << alienMen[i]->showStats() << "\n";
				}
				userInput = utils::enterInput(alienMen.size()); //select a male alien
				alienBreedingContainer[1] = alienMen[userInput - 1]; //adds selected male alien to the bredding container array


				//breeding
				 child = new Alien(*alienBreedingContainer[0] + *alienBreedingContainer[1]); //assigns new Alien using + operator overload to Alien* child instance
				//display stats of both parents and child
				std::cout << "\n\n\nALIEN FATHER: " << alienBreedingContainer[1]->showStats() << "\n";
				std::cout << "ALIEN MOTHER: " << alienBreedingContainer[0]->showStats() << "\n";
				std::cout << "ALIEN SPAWNED: " << child->showStats();

				//copies child to female or male Alien vectors 
				if (child->getIsFemale()) {
					alienWomen.push_back(child);

				}
				else {
					alienMen.push_back(child);
				}

				//menu
				std::cout << "\n\n1.Breed New Alien?\n";
				std::cout << "2.Go Back\n";
				userInput = utils::enterInput(2);
				if (userInput == 2) { break; } //go back to main menu
				
			}

			break;

		case 3: //Compare Aliens

			while (1) { //mainloop

				//create alien list
				std::vector<Alien*>alienList;
				//loop to populate alienList
				for (int i = 0; i < alienMen.size() + alienWomen.size(); i++) {
					if (i < alienMen.size()) {
						alienList.push_back(alienMen[i]);
					}
					if (i < alienWomen.size()) {
						alienList.push_back(alienWomen[i]);
					}
				}

				//select alien 1 to compare
				std::cout << "\n\n\nCHOOSE ALIEN 1\n\n";
				//listing all aliens in alienList
				for (int i = 0; i < alienList.size(); i++) {
					std::cout << i+1 << ". " << alienList[i]->showStats() << "\n";
				}
				userInput = utils::enterInput(alienList.size()); //selects 1st alien

				alienCompareContainer[0] = alienList[userInput - 1]; //adds selected alien to compare container

				//select alien 2
				std::cout << "\n\n\nCHOOSE ALIEN 2\n\n";
				//listing all aliens again
				for (int i = 0; i < alienList.size(); i++) {
					std::cout << i + 1 << ". " << alienList[i]->showStats() << "\n";
				}
				userInput = utils::enterInput(alienList.size()); //selects 2nd alien

				alienCompareContainer[1] = alienList[userInput - 1]; //adds selected alien to compare container
				
				//comparison table using operator overloads
				//compares aliens in index 0 and 1 (the only indexes) of the alien compare container
				std::cout << "\n\n\nALIEN COMPARISON\n";
				std::cout << "Alien 1: " << alienCompareContainer[0]->showStats() << "\n";
				std::cout << "Alien 2: " << alienCompareContainer[1]->showStats() << "\n\n";

				std::cout << "Alien 1 == Alien 2: " << utils::boolStr((alienCompareContainer[0] == alienCompareContainer[1])) << "\n";
				std::cout << "Alien 1 != Alien 2: " << utils::boolStr((alienCompareContainer[0] != alienCompareContainer[1])) << "\n";
				std::cout << "Alien 1 > Alien 2: " << utils::boolStr((alienCompareContainer[0] > alienCompareContainer[1])) << "\n";
				std::cout << "Alien 1 >= Alien 2: " << utils::boolStr((alienCompareContainer[0] >= alienCompareContainer[1])) << "\n";
				std::cout << "Alien 1 < Alien 2: " << utils::boolStr((alienCompareContainer[0] < alienCompareContainer[1])) << "\n";
				std::cout << "Alien 1 <= Alien 2: " << utils::boolStr((alienCompareContainer[0] <= alienCompareContainer[1])) << "\n\n";

				//menu
				std::cout << "1.Compare another pair of aliens?\n";
				std::cout << "2.Go Back\n";

				userInput = utils::enterInput(2);
				if (userInput == 2) break; //go back to main menu

			}
			break;

		case 4: //Exit
			finish = true; //quits program
			break;
		}
	}

	return 0;
}