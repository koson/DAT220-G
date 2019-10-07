#ifndef STUDENT_FACTORY_H
#define STUDENT_FACTORY_H

#include <string>

#include "student.h"

// Virtual student factory base class. Implemented in derived classes.
class StudentFactory
{
public:
    virtual Student* CreateStudent(const std::string& name, int id) = 0;
};

#endif
