#include <iostream>

#include "patient.h"

Patient::Patient()
{
    id = -1;
    firstName = "Uninitialized";
    lastName = "Uninitialized";
}

Patient::Patient(int id, const std::string& firstName, const std::string& lastName)
{
    id = id; // What happens here? This line does nothing.
    this->id = id; // Use this to force variable scope, use member variable.
    Patient::id = id; // You can also use the class name directly to force scope.

    this->firstName = firstName;
    this->lastName = lastName;
}

void Patient::print() const
{
    std::cout << id << ": " << firstName << " " << lastName << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Patient& patient)
{
    os << patient.id << ": " << patient.firstName << " " << patient.lastName;
    return os;
}

std::istream& operator>>(std::istream& is, Patient& patient)
{
    is >> patient.id;
    is >> patient.firstName;
    is >> patient.lastName;
    return is;

}

bool operator<(const Patient& patient1, const Patient& patient2)
{
    return patient1.id < patient2.id;
}
