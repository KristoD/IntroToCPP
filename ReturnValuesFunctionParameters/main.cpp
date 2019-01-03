#include <iostream>

void showMenu() {
    std::cout << "1. Search" << std::endl;
    std::cout << "2. View Record" << std::endl;
    std::cout << "3. Quit" << std::endl;
}

int askSelection() {
    std::cout << "Enter selection: " << std::endl;

    int input;
    std::cin >> input;
    return input;
}

void processSelection(int input) {
    switch(input) {
        case 1:
            std::cout << "Searching ...." << std::endl;
            break;
        case 2:
            std::cout << "Viewing..." << std::endl;
            break;
        case 3:
            std::cout << "Quiting..." << std::endl;
            break;
        default:
            std::cout << "Please select an item from the menu" << std::endl;
    }
}

int main() {
    showMenu();
    int input = askSelection();
    processSelection(input);
}