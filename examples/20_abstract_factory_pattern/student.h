#ifndef STUDENT_H
#define STUDENT_H

class Student
{
public:
    Student(const std::string& name, int id)
    {
        this->name = name;
        this->id = id;
    }

    std::string name;
    int id;
};

#endif
