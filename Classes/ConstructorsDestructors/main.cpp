#include <iostream>
#include "Cat.h"

int main() {
    std::cout << "Starting program..." << std::endl;
    Cat bob;
    bob.speak();
    std::cout << "Ending program..." << std::endl;
    return 0;
}