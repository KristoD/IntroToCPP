#include <iostream>

/* This function copies the value of dValue. It won't change the value of dValue.
void manipulate(double value) {
    value = 10.0;
} */

// This method receives an address in memory instead of copying a variable value.
// You then dereference the pointer to get the value, and can change the value of dValue in a different function.
void manipulate(double* pValue) {
    std::cout << "2. Value of double in manipulate: " << *pValue << std::endl;
    *pValue = 10.0;
    std::cout << "3. Value of double in manipulate: " << *pValue << std::endl;
}

int main() {

    int nValue = 8;

    int* pnValue = &nValue;

    std::cout << "Int value: " << nValue << std::endl;

    std::cout << "Pointer to int address: " << pnValue << std::endl;
    std::cout << "Int value via pointer: " << *pnValue << std::endl;\

    std::cout << "===================================" << std::endl;
    double dValue = 123.4;
    std::cout << "1. dValue: " << dValue << std::endl;
    manipulate(&dValue);
    std::cout << "4. dValue: " << dValue << std::endl;

    return 0;
}