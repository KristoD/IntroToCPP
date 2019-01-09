#include <iostream>

int main() {

    const int NSTRINGS = 5;
    std::string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

    // std::string *pTexts = texts;

    // std::string *smthng = pTexts + 1;

    // std::string newStr = *pTexts + *smthng;

    // std::cout << newStr << std::endl;

    std::string *pTexts = texts;

    std::cout << "First element memory address:" << pTexts << std::endl;
    std::cout << *pTexts << std::endl;

    pTexts += 1;

    std::cout << "Second element memory address: " << pTexts << std::endl;
    std::cout << *pTexts << std::endl;

    std::cout << *texts << std::endl;

    std::string str2 = texts[0];
    std::string str3 = texts[1];

    std::cout << &str2 << std::endl;
    std::cout << &str3 << std::endl;

    std::cout << pTexts << std::endl;
    std::cout << &pTexts << std::endl;

    int* int_pointer;
    float* float_pointer;
    char* char_pointer;
    std::string* str_pointer;

    std::cout << sizeof(int_pointer) << std::endl;
    std::cout << sizeof(float_pointer) << std::endl;
    std::cout << sizeof(char_pointer) << std::endl;
    std::cout << sizeof(str_pointer) << std::endl;


    // for(int i = 0 i < NSTRINGS; i++,

    return 0;
}