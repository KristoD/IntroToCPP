#include <iostream>

int main() {

    std::cout << "1.\tAdd new record." << std::endl;
    std::cout << "2.\tDelete record." << std::endl;
    std::cout << "3.\tView record." << std::endl;
    std::cout << "4.\tSearch record." << std::endl;
    std::cout << "5.\tQuit." << std::endl;

    std::cout << "Enter your selection > " << std::flush;

    int value;
    std::cin >> value;

    if(value < 3) {
        std::cout << "Insufficient privileges to use these menu options" << std::endl;
    } 
    else {
        std::cout << "Access granted." << std::endl;
    }

    if(value == 5) {
        std::cout << "Quiting...." << std::endl;
    }
    else {
        std::cout << "Not quitting..." << std::endl;
    }
}