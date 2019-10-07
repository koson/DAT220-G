#ifndef ASSIGNMENT_2_4_STUDENT_H
#define ASSIGNMENT_2_4_STUDENT_H

#include <string>
class Student
{
public:
    Student(const std::string& studentName, const std::string& courseName, const std::string& studentGrade);
    void print() const;
    std::string studentName, courseName, studentGrade;

};
#endif //ASSIGNMENT_2_4_STUDENT_H
