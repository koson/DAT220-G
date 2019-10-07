/*

Shows how a class can handle internal heap allocation with constructors and destructors.
Shows when objects are copied and destructed when passed as arguments to functions.
Shows the difference between shallow and deep object copies.

*/

/*
    Shallow copy: Member values are copied directly, even pointers. Pointers
    will thus point to the same memory as the source object, which is,
    for the most part, bad. E.g. both objects would try to free the same
    memory in their destructors.

    Deep copy: Dynamic memory (heap memory) is allocated for each object,
    and the contents are copied from one to another. Pointers do not point
    to the same addresses, but to data that contains the same content.

*/

#include <iostream>
#include <vector>
#include <string>

#include "point.h"

// Function takes a Point, this will trigger the copy constructor!
void func(Point p)
{
    // The copy will be destructed at the end of the function
}

int main()
{
    // Destructed at end of scope
    {
        Point p;
    }

    // Allocating on the stack using default constructors.
    // Note: Will still allocate internal buffers on heap
    Point p, q;

    // Use the assignment operator
    q = p;

    // Use the copy constructor by argument passing.
    // Note: Will be destructed when call returns
    func(q);

    return 0;
}
