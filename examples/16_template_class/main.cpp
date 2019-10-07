/*
 * Shows how to create a template class
 * Shows how to use this class in your application
 *
 * Note: Templates are fully implemented in header files
 */

#include <iostream>
#include <string>

#include "print.h"

int main()
{
    // Construct and print object with value 5
    Print<int> p1(5);
    p1.doSomething();

    // Construct and print double with value 2.3
    Print<double> p2(2.3);
    p2.doSomething();

    // Construct and print object with value "Hello, World!" as a std::string
    Print<std::string> p3(std::string("Hello, World!"));
    p3.doSomething();

    return 0;
}
