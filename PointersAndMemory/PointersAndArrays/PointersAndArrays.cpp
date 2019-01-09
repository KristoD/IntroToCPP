#include <iostream>

int main() {

    // The string object allocates static amount of memory
    std::string texts[] = {"one", "two", "three"};

    std::string *pTexts = texts;

    std::cout << sizeof(texts)/sizeof(std::string) << std::endl;

    for(int i = 0; i < sizeof(texts)/sizeof(std::string); i++) {
        std::cout << pTexts[i] << " " << std::flush;
    }

    std::cout << std::endl;

    for(int i = 0; i < sizeof(texts)/sizeof(std::string); i++, pTexts++) {
        std::cout << *pTexts << " " << std::flush;
    }

    std::cout << std::endl;

    std::string *pElement = &texts[0];
    std::string *pEnd = &texts[2];

    while(true) {
        std::cout << *pElement << " " << std::flush;
        
        if(pElement == pEnd) {
            break;
        }

        pElement++;

    }

    return 0;
}