#include "actual_student_factory.h"

Student* ActualStudentFactory::CreateStudent(const std::string& name, int id)
{
    // The factory can check parameters and do other stuff before making the object
    if (id == 1234)
        return nullptr;

    return new Student(name, id);
}
