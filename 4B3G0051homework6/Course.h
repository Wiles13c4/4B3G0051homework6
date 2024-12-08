#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
private:
    std::string courseName;
    std::string courseCode;
    int credits;

public:
    Course(std::string name = "", std::string code = "", int cr = 0);

    void setCourseName(std::string name);
    void setCourseCode(std::string code);
    void setCredits(int cr);

    std::string getCourseName() const;
    std::string getCourseCode() const;
    int getCredits() const;

    void displayCourseInfo() const;
};

#endif
