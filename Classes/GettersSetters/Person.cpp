#include <iostream>
#include "Person.h"

Person::Person() {
    std::cout << "Creating person..." << std::endl;
}

std::string Person::toString() {
    return "Person's name is: " + name;
}

void Person::setName(std::string newName) {
    name = newName;
}

std::string Person::getName() {
    return name;
}