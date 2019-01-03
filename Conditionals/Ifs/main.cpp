#include <iostream>

int main() {

    std::string password = "hello";
    std::cout << "Enter your password > " << std::flush;

    std::string promptedPassword;
    std::cin >> promptedPassword;

    if(promptedPassword == password) {
        std::cout << "Access granted." << std::endl;
    } else {
        std::cout << "Access denied" << std::endl;
    }

}