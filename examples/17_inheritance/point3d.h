#ifndef POINT3D_H
#define POINT3D_H

#include "point.h"

// Child / inherited class. Inherits from Point
class Point3d : public Point
{
public:
    // Child default constructor. Point default constructor is called
    // automatically.
    Point3d();

    // Child constructor with arguments.
    Point3d(int x, int y, int z);

    // Destructor, was made virtual in Point class and does not need to be
    // marked virtual here, but it is good practice to do so for clarity.
    virtual ~Point3d();

    // Replaces the Point::Calc() function
    int Calc();

    // Adds a single member
    int z;

    // And a pointer to some memory allocated in the constructor
    char* data;
};

#endif
