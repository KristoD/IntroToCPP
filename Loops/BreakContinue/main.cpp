#include <iostream>

int main() {

    /* break
    for (int i = 0; i < 5; i++) {
        std::cout << "i is : " << i << std::endl;

        if(i == 3) {
            break;
        }

        std::cout << "Looping..." << std::endl;
    }
    */

   for (int i = 0; i < 5; i++) {

       std::cout << "i is: " << i << std::endl;

       if(i == 3) {
           continue;
       }

       std::cout << "looping...." << std::endl;

   }

   std::cout << "Programing quitting..." << std::endl;

}
