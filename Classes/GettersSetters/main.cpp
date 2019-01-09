#include <iostream>
#include "Person.h"

int main() {

    Person person;
    person.setName("Bob");
    std::cout << person.toString() << std::endl;
    std::cout << "Name of person with get method: " << person.getName() << std::endl;

    return 0;
}