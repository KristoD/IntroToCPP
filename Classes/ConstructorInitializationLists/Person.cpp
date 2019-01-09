#include "Person.h"
#include <sstream>

std::string Person::toString() {
    std::stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << " | Age: ";
    ss << age;

    return ss.str();
}