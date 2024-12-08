#include "Course.h"
#include <iostream>

Course::Course(std::string name, std::string code, int cr)
    : courseName(name), courseCode(code), credits(cr) {}

void Course::setCourseName(std::string name) { courseName = name; }
void Course::setCourseCode(std::string code) { courseCode = code; }
void Course::setCredits(int cr) { credits = cr; }

std::string Course::getCourseName() const { return courseName; }
std::string Course::getCourseCode() const { return courseCode; }
int Course::getCredits() const { return credits; }

void Course::displayCourseInfo() const {
    std::cout << "Course Name: " << courseName << std::endl;
    std::cout << "Course Code: " << courseCode << std::endl;
    std::cout << "Credits: " << credits << std::endl;
}