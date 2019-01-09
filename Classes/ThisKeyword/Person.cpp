#include "Person.h"
#include <sstream>

Person::Person() {
    age = 0;
    name = "";
}

Person::Person(std::string name, int age) {
    this->name = name;
    this->age = age;

    std::cout << "Memory location of object: " << this << std::endl;
}

std::string Person::toString() {
    std::stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << ": Age: ";
    ss << age;

    return ss.str();
}