#ifndef ACTUAL_STUDENT_FACTORY_H
#define ACTUAL_STUDENT_FACTORY_H

#include "student_factory.h"
#include "student.h"

// Implementation of the abstract StudentFactory base class
class ActualStudentFactory : public StudentFactory
{
public:
    Student* CreateStudent(const std::string& name, int id);
};


#endif
