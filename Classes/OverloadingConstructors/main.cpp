#include <iostream>
#include "Person.h"

int main() {

    Person p1;
    std::cout << p1.toString() << std::endl;

    Person p2("Bob");
    std::cout << p2.toString() << std::endl;

    Person p3("Jim", 73);
    std::cout << p3.toString() << std::endl;

    return 0;
}