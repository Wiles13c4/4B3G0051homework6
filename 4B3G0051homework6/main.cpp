#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"

int main() {
    // 建立課程
    Course math("Mathematics", "MATH101", 4);
    Course cs("Computer Science", "CS102", 3);

    // 建立教師
    Teacher professor("Dr. Smith", 45, "Male", "T001", "Computer Science");
    professor.assignCourse(math);
    professor.assignCourse(cs);

    // 建立學生
    Student student1("Alice", 20, "Female", "S001", 3.5);
    student1.enrollCourse(math);

    // 顯示資訊
    std::cout << "Professor Information:" << std::endl;
    professor.displayInfo();
    professor.displayTaughtCourses();

    std::cout << "\nStudent Information:" << std::endl;
    student1.displayInfo();
    student1.displayEnrolledCourses();

    return 0;
}