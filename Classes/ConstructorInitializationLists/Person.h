#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

class Person {
private:
    int age;
    std::string name;

public:
    std::string toString();
    Person(): name("unnamed"), age(0) {};
    Person(std::string name, int age): name(name), age(age) {};

};

#endif