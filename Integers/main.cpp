#include <iostream>
#include <limits> // limits.h

int main() {
    std::cout << INT_MAX << std::endl;
    std::cout << INT_MIN << std::endl;

    int value = -1239233;
    std::cout << value << std::endl;

    long int lValue = 1209234234234;
    std::cout << lValue << std::endl;

    short int sValue = 23434;
    std::cout << sValue << std::endl;

    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of short int: " << sizeof(short int) << " bytes" << std::endl;

    // only stores positive, which means you can store bigger positive numbers
    // because you don't need extra bits to represent negative numbers 
    unsigned int uValue = 2342342;
    std::cout << uValue << std::endl;
    std::cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << std::endl;


}