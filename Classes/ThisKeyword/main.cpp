#include "Person.h"

int main() {

    Person p1;
    Person p2("Bob", 33);
    Person p3("Jim", 22);

    std::cout << p1.toString() << ": Memory location: " << &p1 << std::endl;
    std::cout << p2.toString() << ": Memory location: " << &p2 << std::endl;
    std::cout << p3.toString() << ": Memory location: " << &p3 << std::endl;


    return 0;
}