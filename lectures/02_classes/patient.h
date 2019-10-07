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


#endif //LECTURE_2_PATIENT_H
