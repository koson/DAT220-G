#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "student.h"

int main()
{
    std::vector<Student> Students;
    std::string studentName, courseName, studentGrade;
    bool Operation = true;
    while(Operation)
    {
        std::cout << "Please enter your name: " << std::endl;
        std::getline(std::cin, studentName);
        if(studentName != "stop")
        {
            std::cout << "Please enter the name of the Course you took: " << std::endl;
            std::getline(std::cin, courseName);
            while(courseName != "stop")
            {
                std::cout << "Please enter the Grade you got: " << std::endl;
                std::getline(std::cin, studentGrade);
                Student student(studentName, courseName,  studentGrade);
                Students.push_back(student);
                std::cout << "Please enter the name of the Course you took: " << std::endl;
                std::getline(std::cin, courseName);

            }
        }
        else if (studentName=="stop")
            Operation = false;
    }
    for (const auto& student:Students)
        student.print();
    return 0;
}









/*
Write an application that:
1. Asks for the name of a student
2. asks for the name of a course and the grade the student got
3. Does this until course name is "stop"
4. Then asks for a new student until the name is "stop"
5. Then prints out the grades gathered for each student
Areas of interest: std::getline, std::map, std::vector, std::list
Expected output: Lars - dat210 - C (for each student)
*/










