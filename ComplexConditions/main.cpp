#include <iostream>

/* 
 * == equallity test
 * != not equals
 * < less than
 * > greater than
 * <= less than or equal to
 * >= greater than or equal to
 * && and
 * || or
 */

int main() {

    int value1 = 7;
    int value2 = 4;

    // condition 1
    if(value1 >= 5) {
        std::cout << "Condition 1: true" << std::endl;
    }
    else {
        std::cout << "Condition 1: false" << std::endl;
    }

    // condition 2
    if(value1 == 7 && value2 == 3) {
        std::cout << "Condition 2: true" << std::endl;
    }
    else {
        std::cout << "Condition 2: false" << std::endl;
    }

    // condition 3
    if(value1 == 7 || value2 == 3) {
        std::cout << "Condition 3: true" << std::endl;
    }
    else {
        std::cout << "Condition 3: false" << std::endl;
    }

    // condition 4
    if( (value2 != 8 && value1 == 10) || value1 < 10) {
        std::cout << "Condition 4: true" << std::endl;
    }
    else {
        std::cout << "Condition 4: false" << std::endl;
    }

    bool condition1 = (value2 != 8) && (value1 == 10);
    bool condition2 = value1 < 10;

    // condition 5
    if(condition1 || condition2) {
        std::cout << "Condition 5: true" << std::endl;
    }
    else {
        std::cout << "Condition 5: false" << std::endl;
    }
}