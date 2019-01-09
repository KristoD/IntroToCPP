#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

class Person {

private:
    int age;
    std::string name;

public:
    Person();
    Person(std::string name, int age);
    std::string toString();

};

#endif