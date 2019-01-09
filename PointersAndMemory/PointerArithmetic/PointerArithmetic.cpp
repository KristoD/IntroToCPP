#include <iostream>

int main() {

    const int NSTRINGS = 5;
    std::string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

    std::string *pTexts = texts;

    pTexts += 3;

    std::cout << *pTexts << std::endl;

    return 0;
}