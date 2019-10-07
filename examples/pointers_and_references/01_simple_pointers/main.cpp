/*

Shows how to create pointers to existing variables.
Shows how to read and write to the variables pointed to.

*/

#include <iostream>
#include <string>

int main()
{
    // Create a couple of variables with values
    int number = 42;
    double pi = 3.1415926535;

    // Create pointers to these variables
    int* pNumber = &number;
    double* pPi = &pi;

    // Change variable pointed to by pNumber.
    // * is the dereference operator.
    *pNumber /= 2;

    // Change variable pointed to by pPi
    *pPi *= 2;

    // Print the current values of number and pi
    std::cout << "Number : " << number << std::endl;
    std::cout << "Pi     : " << pi << std::endl;

    return 0;
}
