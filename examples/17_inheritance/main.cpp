/*

Shows how to create a base class and inherit this in a child class.
Shows how to override virtual member functions.
Shows the importance of virtual destructors.
Shows how to use static_cast and dynamic_cast.

Note that this project gets two warnings about unused variables.
This is to be expected as they are in fact unused.

*/

#include <iostream>

#include "point.h"
#include "point3d.h"

int main()
{
    // Allocate and construct Point3d object, assign to Point* base pointer
    Point* p = new Point3d(1, 2, 3);

    // Call Point3d::calc using dynamic / late binding. This has a small runtime cost.
    int sum = p->Calc();

    // Create a Point reference to the Point3d instance
    Point& p2 = *p;

    // Uses late binding to call the Point3d version of calc()
    p2.Calc();

    // Delete a Point3d using the virtual destructor
    delete p;
    p = nullptr;

    Point p3;

    // Below we are creating a Point3d pointer to a Point object, which is
    // bad stuff! Notice the difference between static and dynamic cast.

    // Will compile and run, but using p4 after is undefined.
    Point3d* p4 = static_cast<Point3d*>(&p3);

    // Will compile and run, but value of p4 will be nullptr. Notice the compiler warning.
    // Adds a small runtime overhead for the check.
    p4 = dynamic_cast<Point3d*>(&p3);

    return 0;
}
