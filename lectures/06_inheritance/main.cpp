#include <iostream>

#include "student.h"

int main()
{
    // Declare a variable of type student.
    // Contains all fields from Person and Student.
    Student student;

    student.id = 5;
    student.name = "Knut Larsen";
    student.address = "Vesterled 29 c";
    student.birth = "2000-02-10";
    student.enrollment = "2019-08-01";

    student.print();

    // Declare a pointer to person, assign to a student
    Person* person = new Student();

    // Run time type information figures out which type person really is.
    // The correct version (Student) of the print() function is called.
    person->print();

    Student student2(7, "Lise", "Stavanger", "2000-02-03", "2019-08-01");
    student2.print();

    return 0;
}
