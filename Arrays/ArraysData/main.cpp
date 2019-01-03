#include <iostream>
#include <string>

int main() {

    int values[3];

    values[0] = 88;
    values[1] = 123;
    values[2] = 7;

    std::cout << values[0] << std::endl;
    std::cout << values[1] << std::endl;
    std::cout << values[2] << std::endl;

    double numbers[4] = {4.5, 2.3, 7.2, 8.1};

    for(int i = 0; i < 4; i++) {
        std::cout << "Element on index " << i << ": " << numbers[i] << std::endl;
    }

    int numberArray[8] = {};

    for(int i = 0; i < 8; i++) {
        std::cout << "Element on index " << i << ": " << numberArray[i] << std::endl;
    }

    // Array of strings

    std::string texts[] = {"apple", "banana", "orange"};

    for(int i = 0; i < 3; i++) {
        std::cout << "Element at index " << i << ": " << texts[i] << std::endl;
    }

    int timesTable[13];

    for(int i = 0; i < 13; i++) {
        if (i == 0) {
            timesTable[i] = 0;
        } else {
            timesTable[i] = timesTable[i - 1] + 12;
        }
    }

    for(int i = 0; i < 13; i++) {
        std::cout << "Element " << i << ": " << timesTable[i] << std::endl;
    }

}