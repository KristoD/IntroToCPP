#include <iostream>
#include "Cat.h"

Cat::Cat() {
    std::cout << "Cat created" << std::endl;
    happy = true;
}

Cat::~Cat() {
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::speak() {
    if(happy) {
        std::cout << "Meowwwww" << std::endl;
    } else {
        std::cout << "Reeeeeeeeeeee" << std::endl;
    }
}