#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include "Course.h"
#include <vector>
#include <string>

class Teacher : public Person {
private:
    std::string employeeId;
    std::string department;
    std::vector<Course> taughtCourses;

public:
    Teacher(std::string n = "", int a = 0, std::string g = "",
        std::string id = "", std::string dept = "");

    void setEmployeeId(std::string id);
    void setDepartment(std::string dept);

    std::string getEmployeeId() const;
    std::string getDepartment() const;

    void assignCourse(const Course& course);
    void displayTaughtCourses() const;
    void displayInfo() const override;
};

#endif
