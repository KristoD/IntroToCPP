#include <iostream>
#include <iomanip>

int main() {

    float fValue = 123.456789;
    std::cout << std::fixed << fValue << std::endl;
    std::cout << std::scientific << fValue << std::endl;
    std::cout << std::setprecision(20) << std::fixed << fValue << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;

    double dValue = 123.456789;
    std::cout << std::setprecision(20) << std::fixed << dValue << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;

    long double ldValue = 123.456789876543210;
    std::cout << std::setprecision(20) << std::fixed << ldValue << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << " bytes" << std::endl;

}