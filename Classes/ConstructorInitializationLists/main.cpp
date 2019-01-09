#include "Person.h"

int main() {

    Person p1("Jim", 39);
    Person p2("Bob", 22);
    Person p3;
    
    std::cout << p1.toString() << std::endl;
    std::cout << p2.toString() << std::endl;
    std::cout << p3.toString() << std::endl;

    return 0;
}