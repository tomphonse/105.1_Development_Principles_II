#include "Utils.h"

namespace utils {
    //to get the user's input and check if its valid
    int enterInput(int maxNum) {

        std::string userInput;

        while (1) { //loop until acceptable input
            std::cout << "\n\tEnter Input: ";
            std::cin >> userInput;

            try { //try catch to stop program from crashing if input is not a int
                if (std::stoi(userInput) > 0 && std::stoi(userInput) <= maxNum) { //checking if user's input is between zero and the maximum accepted value
                    return std::stoi(userInput); //returning user's input as int if acceptable
                }

                else if (std::stoi(userInput) > 0 && maxNum == 0) { //if maxNum set to 0 there is no upper limit
                    return std::stoi(userInput); //returning user's input as int if acceptable
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


    std::string boolStr(bool boolean) { //returns string that says "True" or "False" for console output

        if (boolean) {
            return "True";
        }
        else {
            return "False";
        }

    }


    float getRandomFloat(float min, float max) { //returns a random float between min and max params

        return min + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (max - min)));

    }

    std::string getRandomName() { //returns procedurally generated name

        std::string name = "";

        std::string vowels[] = { "a", "e", "i", "o", "u" };
        std::string consonants[] = { "b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "t", "v", "w", "x", "y", "z" };
        std::string prefixes[] = { "zy", "zx", "xe", "ze", "li", "xor", "zor", "zen", "ur" };
        std::string suffixes[] = { "or", "xor", "zor", "ig", "xx", "ton", "tom", "don", "dom" };

        bool usePrefix = rand() % 2;
        bool useSuffix = rand() % 2;
        int nameLength = rand() % 5 + 3; //choosing a random number of letters between 3 and 7 (Probability of adding more characters: P(X = i) = (19/20)^(i-1) * (1/20) + (19/20)^(i) )


        if (usePrefix) { //adding a prefix
            name = name + prefixes[rand() % sizeof(prefixes) / sizeof(prefixes[0])];
        }

        for (int i = 0; i <= nameLength; i++) { //loop generating the main part of the name
        addAnother:
            if (i % 2 == 0) { //if even add a consonant
                name = name + consonants[rand() % sizeof(consonants) / sizeof(consonants[0])];
            }
            else { //else add an odd
                name = name + vowels[rand() % sizeof(vowels) / sizeof(vowels[0])];
            }

            if (rand() % 20 == 10) { //P(X = i) = (19/20)^(i-1) * (1/20) + (19/20)^(i) 
                goto addAnother;
            }
        }

        if (useSuffix) { //adding a suffix
            name = name + suffixes[rand() % sizeof(suffixes) / sizeof(suffixes[0])];
        }

        name[0] = toupper(name[0]); //making first letter of the name uppercase
        return name;

    }


  
    // This function takes a float number f and rounds it off to a given precision.
    // The precision is specified by the second argument (an integer).
    std::string setPrecision(float f, int precision) {

        // Convert the float to a string for easy manipulation.
        std::string str = std::to_string(f);

        // Keep track of the position of the decimal point in the string.
        int foundDecimal = -1;

        // Loop through the string to find the position of the decimal point.
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '.') {
                foundDecimal = i + 1;
            }

            // If the decimal point is found, remove all characters after the specified precision.
            if (foundDecimal != -1) {
                for (int j = str.size(); j > foundDecimal + precision; j--) {
                    str.pop_back();
                }

                // Exit the loop once the specified precision has been reached.
                break;
            }
        }

        // Return the rounded-off string representation of the float.
        return str;
    }
}
