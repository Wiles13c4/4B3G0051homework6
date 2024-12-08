#include "Teacher.h"
#include <iostream>

Teacher::Teacher(std::string n, int a, std::string g, std::string id, std::string dept)
    : Person(n, a, g), employeeId(id), department(dept) {}

void Teacher::setEmployeeId(std::string id) { employeeId = id; }
void Teacher::setDepartment(std::string dept) { department = dept; }

std::string Teacher::getEmployeeId() const { return employeeId; }
std::string Teacher::getDepartment() const { return department; }

void Teacher::assignCourse(const Course& course) {
    taughtCourses.push_back(course);
}

void Teacher::displayTaughtCourses() const {
    std::cout << "Courses taught by " << name << ":" << std::endl;
    for (const auto& course : taughtCourses) {
        course.displayCourseInfo();
    }
}

void Teacher::displayInfo() const {
    Person::displayInfo();
    std::cout << "Employee ID: " << employeeId << std::endl;
    std::cout << "Department: " << department << std::endl;
}