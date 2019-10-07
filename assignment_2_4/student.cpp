#include <iostream>
#include "student.h"

Student::Student(const std::string& studentName, const std::string& courseName, const std::string& studentGrade)
{
    this -> studentName = studentName;
    this -> courseName = courseName;
    this ->  studentGrade = studentGrade;
}
void Student::print() const
{
    std::cout << studentName << " - " << courseName << " - " << studentGrade << std::endl;
}

// Expected output: Lars - dat210 - C (for each student)