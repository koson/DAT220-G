#include <iostream>

#include "point3d.h"

Point3d::Point3d()
{
    std::cout << "Constructing child" << std::endl;

    z = 0;
    data = new char[32];
}

// Child constructor with arguments. Calls Point constructor explicitly.
Point3d::Point3d(int x, int y, int z) : Point(x, y)
{
    std::cout << "Constructing child with arguments" << std::endl;

    this->z = z;
    data = new char[32];
}

Point3d::~Point3d()
{
    std::cout << "Destructing child" << std::endl;

    // Free the heap memory that was allocated in the constructor
    delete[] data;
}

int Point3d::Calc()
{
    std::cout << "Point3d::Calc()" << std::endl;

    // Uses Point::calc base function in child function
    return Point::Calc() + z;
}
