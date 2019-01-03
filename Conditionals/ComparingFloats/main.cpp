#include <iostream>
#include <iomanip>

int main() {
    
    float value1 = 1.1;

    if(value1 < 1.11) {
        std::cout << "equals" << std::endl;
    }
    else {
        std::cout << "not equal" << std::endl;
    }

    std::cout << std::setprecision(10) << value1 << std::endl;

}