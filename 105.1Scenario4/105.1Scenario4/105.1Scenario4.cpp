#include <iostream>
#include "Alien.h"

int main() {

	srand(time(nullptr));
	Alien alien1(88.5, 6.2, false);
	Alien alien2(50, 5.5, true);

	Alien alienChild = alien1 + alien2;

	Alien alien3(120, 5.8, false);
	Alien alien4(66, 4.9, true);

	Alien alienChild2 = alien3 + alien4;

	std::cout << "Alien 1 stats\nHeight: " << alien1.getHeight() << "ft Weight: " << alien1.getWeight() << "kg Sex: " << alien1.getSex() << "\n\n";
	std::cout << "Alien 2 stats\nHeight: " << alien2.getHeight() << "ft Weight: " << alien2.getWeight() << "kg Sex: " << alien2.getSex() << "\n\n";
	std::cout << "Alien Child stats\nHeight: " << alienChild.getHeight() << "ft Weight: " << alienChild.getWeight() << "kg Sex: " << alienChild.getSex() << " | Prestige: " << alienChild.getPrestige() << "\n\n\n\n";

	std::cout << "Alien 3 stats\nHeight: " << alien3.getHeight() << "ft Weight: " << alien3.getWeight() << "kg Sex: " << alien3.getSex() << "\n\n";
	std::cout << "Alien 4 stats\nHeight: " << alien4.getHeight() << "ft Weight: " << alien4.getWeight() << "kg Sex: " << alien4.getSex() << "\n\n";
	std::cout << "Alien Child 2 stats\nHeight: " << alienChild2.getHeight() << "ft Weight: " << alienChild2.getWeight() << "kg Sex: " << alienChild2.getSex() << " | Prestige: " << alienChild2.getPrestige() << "\n\n\n\n";
	
	std::cout << "Alien Child comparison\n";
	std::cout << "Alien Child 1 == Alien Child 2: " << (alienChild == alienChild2) << "\n";
	std::cout << "Alien Child 1 != Alien Child 2: " << (alienChild != alienChild2) << "\n";
	std::cout << "Alien Child 1 > Alien Child 2: " << (alienChild > alienChild2) << "\n";
	std::cout << "Alien Child 1 >= Alien Child 2: " << (alienChild >= alienChild2) << "\n";
	std::cout << "Alien Child 1 < Alien Child 2: " << (alienChild < alienChild2) << "\n";
	std::cout << "Alien Child 1 <= Alien Child 2: " << (alienChild <= alienChild2) << "\n";





	return 0;
}