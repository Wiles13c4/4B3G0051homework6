#include "Student.h"
#include <iostream>

Student::Student(std::string n, int a, std::string g, std::string id, double gpv)
    : Person(n, a, g), studentId(id), gpa(gpv) {}

void Student::setStudentId(std::string id) { studentId = id; }
void Student::setGPA(double gpv) { gpa = gpv; }

std::string Student::getStudentId() const { return studentId; }
double Student::getGPA() const { return gpa; }

void Student::enrollCourse(const Course& course) {
    enrolledCourses.push_back(course);
}

void Student::displayEnrolledCourses() const {
    std::cout << "Enrolled Courses for " << name << ":" << std::endl;
    for (const auto& course : enrolledCourses) {
        course.displayCourseInfo();
    }
}

void Student::displayInfo() const {
    Person::displayInfo();
    std::cout << "Student ID: " << studentId << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
}