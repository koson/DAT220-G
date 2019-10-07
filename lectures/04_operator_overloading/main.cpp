#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "patient.h"

int main()
{
    // Declares a patient instance / object on the stack
    Patient patient;

    // Access and set member variables
    patient.id = 5;
    patient.firstName = "Lise";
    patient.lastName = "Larsen";

    // Use operator<< to print a patient
    std::cout << "Printed from operator: ";
    std::cout << patient << " is a great patient." << std::endl;

    // Declare variable, uses default constructor
    Patient patient2;

    std::cout << "Enter patient information, id, firstName, lastName:" << std::endl;
    // Use operator>> to read patient 2 information
    std::cin >> patient2;

    // Use operator<< to print patient 2 information
    std::cout << "Patient 2 info: ";
    std::cout << patient2 << std::endl;

    std::vector<Patient> patients;

    patients.push_back(Patient(5, "first 5", "last 5"));
    patients.push_back(Patient(2, "first 2", "last 2"));
    patients.push_back(Patient(9, "first 9", "last 9"));
    patients.push_back(Patient(1, "first 1", "last 1"));
    patients.push_back(Patient(7, "first 7", "last 7"));

    // Sort patients with operator<
    std::sort(patients.begin(), patients.end());

    // Sort patients using a lambda (anonymous function, usually short)
    std::sort(patients.begin(), patients.end(), [](auto& p1, auto& p2) { return p1.id > p2.id; });

    // String used to match last name, read from user
    std::string needle;

    std::cout << "Enter last name for patient search: ";
    std::getline(std::cin, needle); // Get rid of remaining newline on cin
    std::getline(std::cin, needle);

    // Search using lambda function. Lambda function returns true on match
    auto it = std::find_if(patients.begin(), patients.end(), [needle](auto& p) { return p.lastName == needle; });

    // find_if returns the end iterator when it doesn't find anything, an iterator to an element on match
    if (it != patients.end())
        std::cout << "Found patient: " << *it << std::endl;
    else
        std::cout << "Did not find patient." << std::endl;

    return 0;
}
