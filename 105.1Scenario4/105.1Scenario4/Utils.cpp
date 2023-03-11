#include "Utils.h"


//to get the user's input and check if its valid
int Utils::enterInput(int maxNum) {

    while (1) { //loop until acceptable input
        std::cout << "\n\tEnter Input: ";
        std::cin >> userInput;

        try { //try catch to stop program from crashing if input is not a float
            if (std::stoi(userInput) > 0 && std::stoi(userInput) <= maxNum) { //checking if user's input is between zero and the maximum accepted value
                return std::stoi(userInput); //returning user's input as float if acceptable
            }

            else if (std::stoi(userInput) > 0 && maxNum == 0) { //if maxNum set to 0 there is no upper limit
                return std::stoi(userInput); //returning user's input as float if acceptable
            }

            else { //wrong input
                std::cout << "\nPlease enter a correct input...\n\n";

            }

        }
        catch (...) { //wrong input
            std::cout << "\nPlease enter a correct input...\n\n";
        }
    }
}


std::string Utils::boolStr(bool boolean) { //returns string that says "True" or "False

	if (boolean) {
		return "True";
	}
	else {
		return "False";
	}

}

void Utils::incrementAliensAmount() {
    aliensAmount++;
}

int Utils::getAliensAmount() {
    return aliensAmount;
}


float Utils::getRandomFloat(float min, float max) {

    return min + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (max - min)));

}

std::string Utils::getRandomName() {

    std::string name = "";
    
    std::string vowels[] = { "a", "e", "i", "o", "u" };
    std::string consonants[] = { "b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "t", "v", "w", "x", "y", "z" };
    std::string prefixes[] = { "zy", "zx", "xe", "ze", "li", "xor", "zor", "zen", "ur" };
    std::string suffixes[] = { "or", "xor", "zor", "ig", "xx", "ton", "tom", "don", "dom" };

    bool usePrefix = rand() % 2;
    bool useSuffix = rand() % 2;
    int nameLength = rand() % 5 + 3; //choosing a random number of letters between 3 and 7 (one in 20 chance of adding more characters per nameLength check for loop below for details_
    

    if (usePrefix) { //adding a prefix
        name = name + prefixes[rand() % sizeof(prefixes) / sizeof(prefixes[0])];
    }

    for (int i = 0; i <= nameLength; i++) { //loop generating the main part of the name
        
        if (i % 2 == 0) { //if even add a consonant
            name = name + consonants[rand() % sizeof(consonants) / sizeof(consonants[0])];
        }
        else { //else add an odd
            name = name + vowels[rand() % sizeof(vowels) / sizeof(vowels[0])];
        }

        if (rand() % 20 == 10) { //one in 20 chance of adding another vowel or odd
            if (i % 2 != 0) {
                name = name + consonants[rand() % sizeof(consonants) / sizeof(consonants[0])];
            }
            else {
                name = name + vowels[rand() % sizeof(vowels) / sizeof(vowels[0])];
            }
        }
    }
    
    if (useSuffix) { //adding a suffix
        name = name + suffixes[rand() % sizeof(suffixes) / sizeof(suffixes[0])];
    }

    name[0] = toupper(name[0]); //making first letter of the name uppercase
    return name;

}


//takes float and removes trailing zeroes, returns as string
std::string Utils::setPrecision(float f, int precision) {

    std::string str = std::to_string(f);
    int foundDecimal = -1;
    //int difference;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '.') {
            foundDecimal = i + 1;
            
        }

        if (foundDecimal != -1) {

            for (int j = str.size(); j > foundDecimal + precision; j--) {
                str.pop_back();

            }
            break;

        }        
    }

    return str;
}
