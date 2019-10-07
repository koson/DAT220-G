#ifndef LECTURE_2_PATIENT_H
#define LECTURE_2_PATIENT_H

#include <string>

// Class declaration (what it contains)
class Patient
{
public:
    // Default constructor
    Patient();

    // Constructor with arguments
    Patient(int id, const std::string& firstName, const std::string& lastName);

    // Member function forward declarations
    void print() const;

    // Member variables
    int id;
    std::string firstName;
    std::string lastName;
};

// Output operator, prints information to stream
std::ostream& operator<<(std::ostream& os, const Patient& patient);

// Input operator, reads information from stream to object
std::istream& operator>>(std::istream& is, Patient& patient);

// Less than operator, used for sorting (e.g. std::sort)
bool operator<(const Patient& patient1, const Patient& patient2);

#endif //LECTURE_2_PATIENT_H
