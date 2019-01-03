#include <iostream>

int main() {

    std::string text = "Enter your name: ";

    std::cout << text << std::flush;

    std::string name;

    std::cin >> name;

    std::cout << "Your name is: " << name << std::endl;

    int value;

    std::cout << "Enter a number: " << std::flush;
    std::cin >> value;

    std::cout << "Value entered: " << value << std::endl;
}