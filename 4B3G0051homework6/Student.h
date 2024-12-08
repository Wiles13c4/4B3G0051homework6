#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Course.h"
#include <vector>
#include <string>

class Student : public Person {
private:
    std::string studentId;
    std::vector<Course> enrolledCourses;
    double gpa;

public:
    Student(std::string n = "", int a = 0, std::string g = "",
        std::string id = "", double gpv = 0.0);

    void setStudentId(std::string id);
    void setGPA(double gpv);

    std::string getStudentId() const;
    double getGPA() const;

    void enrollCourse(const Course& course);
    void displayEnrolledCourses() const;
    void displayInfo() const override;
};

#endif
