#include <iostream>
#include <string>

int main() {

    std::string animals[2][3] = { 
        {"fox", "dog", "cat"}, 
        {"mouse", "squirrel", "parrot"} 
    };

    for(unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
        for(unsigned int j = 0; j < sizeof(animals[i]) / sizeof(animals[i][0]); j++) {
            std::cout << animals[i][j] << " " << std::flush;
        }
        std::cout << std::endl;
    }

    std::cout << sizeof(std::string) << std::endl;
    std::cout << sizeof(animals[0]) << std::endl;
    std::cout << sizeof(animals[1]) << std::endl;

    std::cout << sizeof(animals) / sizeof(animals[0]) << std::endl;
    std::cout << sizeof(animals[0]) / sizeof(animals[0][0]) << std::endl;
}