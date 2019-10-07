#include <iostream>
#include <string>

#include "patient.h"

int main()
{
    // Declares a patient instance / object on the stack
    Patient patient;

    // Access and set member variables
    patient.id = 5;
    patient.firstName = "Lise";
    patient.lastName = "Larsen";

    // Access and run member functions
    patient.print();

    // Declare variable, uses default constructor
    Patient patient2;

    // Call the print function on this object
    patient2.print();

    // Declare variable using constructor with arguments
    Patient patient3(7, "Knut", "Knutsen");

    // Call the print function on this object
    patient3.print();

    // Repetition: Declare an array of ints
    int numbers[10];

    // Declare an array of patients, same syntax
    Patient patients[10];

    // Print all 10 patients with a for loop
    for (int i = 0; i < 10; i++)
        patients[i].print();

    // Print all 10 patients with a range-based for loop
    for (const auto& patient: patients)
        patient.print();

    return 0;
}
