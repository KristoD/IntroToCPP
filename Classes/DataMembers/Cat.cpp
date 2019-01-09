#include <iostream>
#include "Cat.h"

void Cat::speak() {
    if(happy) {
        std::cout << "Meowwww" << std::endl;
    } else {
        std::cout << "Reeeeeeeeee" << std::endl;
    }
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}