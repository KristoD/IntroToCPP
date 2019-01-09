#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

class Person {
    public:
        Person();
        Person(std::string newName);
        Person(std::string newName, int newAge);
        std::string toString();

    private:
        int age;
        std::string name;
};

#endif