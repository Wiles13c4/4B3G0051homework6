#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
    int age;
    std::string gender;

public:
    Person(std::string n = "", int a = 0, std::string g = "");

    void setName(std::string n);
    void setAge(int a);
    void setGender(std::string g);

    std::string getName() const;
    int getAge() const;
    std::string getGender() const;

    virtual void displayInfo() const;
};

#endif
