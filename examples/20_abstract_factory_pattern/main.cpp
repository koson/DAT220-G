#include <iostream>

#include "actual_student_factory.h"

int main()
{
    // Create our factory
    ActualStudentFactory asf;

    // Use the factory to create a Student object
    Student* student = asf.CreateStudent("Christian", 1234);

    // Check if the factory gave us an object
    if (student == nullptr)
        std::cout << "Factory did not create an object." << std::endl;
    else
        std::cout << "Factory created the object successfully." << std::endl;

    return 0;
}
