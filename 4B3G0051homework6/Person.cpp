#include "Person.h"
#include <iostream>

Person::Person(std::string n, int a, std::string g)
    : name(n), age(a), gender(g) {}

void Person::setName(std::string n) { name = n; }
void Person::setAge(int a) { age = a; }
void Person::setGender(std::string g) { gender = g; }

std::string Person::getName() const { return name; }
int Person::getAge() const { return age; }
std::string Person::getGender() const { return gender; }

void Person::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Gender: " << gender << std::endl;
}