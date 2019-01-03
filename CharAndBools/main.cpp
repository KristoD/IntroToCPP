#include <iostream>

int main() {

    bool bValue = false;

    std::cout << bValue << std::endl;

    char cValue = '7';

    // casting char to int to find ASCII number for specified character
    std::cout << (int) cValue << std::endl;

    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;

    wchar_t wValue = 'i';
    std::cout << (char) wValue << std::endl;
    std::cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;

}