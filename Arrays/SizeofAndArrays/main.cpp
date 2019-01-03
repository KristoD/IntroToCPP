#include <iostream>
#include <string>
#include <array>

int main() {

    int value = 34;
    int values[] = {4, 7, 3, 4};

    std::cout << sizeof(values) << std::endl;


    for(int i = 0; i < sizeof(values) / sizeof(int); i++) {
        std::cout << values[i] << " " << std::flush;
    }

    std::cout << std::endl;

    // number of bytes
    // std::cout << sizeof(value) << std::endl;

}