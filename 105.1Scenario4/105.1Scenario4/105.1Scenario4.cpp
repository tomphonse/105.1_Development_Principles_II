#include <iostream>
#include <vector>
#include "Utils.h"
#include "Alien.h"

Utils utils;
std::vector <Alien*> alienMen;
std::vector <Alien*> alienWomen;
Alien* alienBreedingContainer[2];
Alien* alienCompareContainer[2];
Alien* child = nullptr;

bool finish = false;
int userInput;




int main() {

	srand(time(nullptr));


	//main menu 
	while (!finish) { //main loop
		std::cout << "\n\n\nMAIN MENU\n\n";
		std::cout << "1. Generate Alien Pairs\n";
		std::cout << "2. Breed Pairs\n";
		std::cout << "3. Compare Aliens\n";
		std::cout << "4. Exit\n";

		switch (utils.enterInput(4)) {

		case 1: //Generate Alien Pairs
			while (1) { //loop until go back
				//generating alien pair
				alienMen.push_back(new Alien(utils.getRandomFloat(70.0f, 200.0f), utils.getRandomFloat(5.0f, 10.0f), false));
				alienWomen.push_back(new Alien(utils.getRandomFloat(40.0f, 150.0f), utils.getRandomFloat(4.0f, 8.0f), true));

				//display stats
				std::cout << "\n\n\nGENERATED ALIENS\n\n";
				std::cout << alienMen[alienMen.size() - 1]->showStats() << "\n";
				std::cout << alienWomen[alienWomen.size() - 1]->showStats() << "\n";
				
				//menu
				std::cout << "\n1.Generate More?\n";
				std::cout << "2.Go Back\n";
				userInput = utils.enterInput(2);
				if (userInput == 2) break;
			}
			break;

		case 2: //Breed Pairs

			//female selection
			while (1) {
				child = nullptr;
				std::cout << "\n\n\nSELECT FEMALE ALIEN FOR BREEDING\n\n";
				for (int i = 0; i < alienWomen.size(); i++) {
					std::cout << i + 1 << ". " << alienWomen[i]->showStats() << "\n";
				}
				userInput = utils.enterInput(alienWomen.size());
				alienBreedingContainer[0] = alienWomen[userInput - 1];

				//male selection
				std::cout << "\n\nFEMALE SELECTED: " << alienBreedingContainer[0]->showStats();
				std::cout << "\nSELECT MALE ALIEN TO BREED\n\n";
				for (int i = 0; i < alienMen.size(); i++) {
					std::cout << i + 1 << ". " << alienMen[i]->showStats() << "\n";
				}
				userInput = utils.enterInput(alienMen.size());
				alienBreedingContainer[1] = alienMen[userInput - 1];


				//breeding
				 child = new Alien(*alienBreedingContainer[0] + *alienBreedingContainer[1]);

				std::cout << "\n\n\nALIEN FATHER: " << alienBreedingContainer[1]->showStats() << "\n";
				std::cout << "ALIEN MOTHER: " << alienBreedingContainer[0]->showStats() << "\n";
				std::cout << "ALIEN SPAWNED: " << child->showStats();


				if (child->getIsFemale()) {
					alienWomen.push_back(child);

				}
				else {
					alienMen.push_back(child);
				}

				//menu
				std::cout << "\n\n1.Breed New Alien?\n";
				std::cout << "2.Go Back\n";
				userInput = utils.enterInput(2);
				if (userInput == 2) { break; }
				
			}

			break;

		case 3: //Compare Aliens

			while (1) { //mainloop

				//create alien list
				std::vector<Alien*>alienList;
				for (int i = 0; i < alienMen.size() + alienWomen.size(); i++) {
					if (i < alienMen.size()) {
						alienList.push_back(alienMen[i]);
					}
					if (i < alienWomen.size()) {
						alienList.push_back(alienWomen[i]);
					}
				}

				//select alien 1
				std::cout << "\n\n\nCHOOSE ALIEN 1\n\n";
				for (int i = 0; i < alienList.size(); i++) {
					std::cout << i+1 << ". " << alienList[i]->showStats() << "\n";
				}
				userInput = utils.enterInput(alienList.size());

				alienCompareContainer[0] = alienList[userInput - 1];

				//select alien 2
				std::cout << "\n\n\nCHOOSE ALIEN 2\n\n";
				for (int i = 0; i < alienList.size(); i++) {
					std::cout << i + 1 << ". " << alienList[i]->showStats() << "\n";
				}
				userInput = utils.enterInput(alienList.size());

				alienCompareContainer[1] = alienList[userInput - 1];
				
				//comparison table
				std::cout << "\n\n\nALIEN COMPARISON\n";
				std::cout << "Alien 1: " << alienCompareContainer[0]->showStats() << "\n";
				std::cout << "Alien 2: " << alienCompareContainer[1]->showStats() << "\n\n";

				std::cout << "Alien 1 == Alien 2: " << (alienCompareContainer[0] == alienCompareContainer[1]) << "\n";
				std::cout << "Alien 1 != Alien 2: " << (alienCompareContainer[0] != alienCompareContainer[1]) << "\n";
				std::cout << "Alien 1 > Alien 2: " << (alienCompareContainer[0] > alienCompareContainer[1]) << "\n";
				std::cout << "Alien 1 >= Alien 2: " << (alienCompareContainer[0] >= alienCompareContainer[1]) << "\n";
				std::cout << "Alien 1 < Alien 2: " << (alienCompareContainer[0] < alienCompareContainer[1]) << "\n";
				std::cout << "Alien 1 <= Alien 2: " << (alienCompareContainer[0] <= alienCompareContainer[1]) << "\n\n";

				//menu
				std::cout << "1.Compare another pair of aliens?\n";
				std::cout << "2.Go Back\n";

				userInput = utils.enterInput(2);
				if (userInput == 2) break;

			}

			

			break;

		case 4: //Exit
			finish = true;
			break;
		}

	}

	return 0;
}