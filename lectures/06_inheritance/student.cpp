#include <iostream>

#include "student.h"

void Student::print()
{
    Person::print();
    std::cout << "enrollment: " << enrollment << std::endl;
}

Student::Student(int id, std::string name, std::string address, std::string birth, std::string enrollment)
    : Person(id, name, address, birth)
{
    this->enrollment = enrollment;
}
