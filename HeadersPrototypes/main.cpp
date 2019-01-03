#include <iostream>

// prototypes
#include "utils.h"

int main() {
    doSomething();
    doSomething();
    return 0;
}

void doSomething() {
    std::cout << "Hello" << std::endl;
}