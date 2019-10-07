#include <iostream>
#include <cstring>

#include "point.h"

Point::Point()
{
    std::cout << "Default constructor called" << std::endl;

    // Call common init
    init();
}

Point::~Point()
{
    std::cout << "Destructor called" << std::endl;

    // Free internal heap memory.
    // Remember to use [] if freeing an array
    delete[] buffer;
    buffer = nullptr;
}

Point::Point(const Point& p)
{
    std::cout << "Copy constructor called" << std::endl;

    // Call common init
    init();

    // Call common deep copy function
    deepCopy(p);
}

Point& Point::operator=(const Point& p)
{
    std::cout << "Assignment operator called" << std::endl;

    // Note: We are not calling init here,
    // because the object already has memory allocated.

    deepCopy(p);

    return *this;
}

void Point::deepCopy(const Point& p)
{
    // Copy the contents of the buffer so they are the same.
    // This makes this a deep copy as opposed to a shallow copy.
    memcpy(buffer, p.buffer, bufferSize);

    // Copy simple members as well
    x = p.x;
    y = p.y;
}

void Point::init()
{

    // Allocate internal heap memory
    buffer = new char[bufferSize];

    // Clear entire buffer to 0
    memset(buffer, 0, bufferSize);

    // Example how to copy a string to it
    memcpy(buffer, "Hello, world!", strlen("Hello, world!"));

    x = y = 0;
}
