#ifndef INC_06_INHERITANCE_STUDENT_H
#define INC_06_INHERITANCE_STUDENT_H

#include <string>

#include "person.h"

// Access modifier:
// public: Same level as in the base class
// protected: public -> protected. Private remains private.
// private: Everything becomes private.
// Usually: Use public.
class Student : public Person
{
public:
    Student() {}
    Student(int id, std::string name, std::string address, std::string birth, std::string enrollment);
    void print() override;

    std::string enrollment;
};


#endif //INC_06_INHERITANCE_STUDENT_H
