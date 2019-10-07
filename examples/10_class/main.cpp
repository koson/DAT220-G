/*
 * Shows how to put the definition of a class in a header file
 * Shows how to put the implementation of a class in a cpp file
 * Shows how to use this class in the application
 *
 * The HelloWorld class has constructors and member functions
 */

#include <iostream>

#include "hello_world.h"

int main()
{
    // Instantiate using default constructor
    HelloWorld hw1;

    // Instantiate using constructor taking a string argument
    HelloWorld hw2(", helloWorld 2");
    HelloWorld hw3(", helloWorld 3");

    // Use addition operator
    HelloWorld hw4 = hw1 + hw2;

    // Use addition assignment operator
    hw4 += hw3;

    // Use std::string conversion operator
    std::string s = hw4;

    // Use operator<< to output HelloWorld as text
    std::cout << "HelloWorld to stream: " << std::endl;
    std::cout << hw4 << std::endl;

    return 0;
}
