/*

Shows how to use references with additional details

Note: A reference is in short a pointer that can not be reassigned
so it refers to a different variable, and that do not need to be
dereferenced when used.

There is also no null reference. A reference always refer to a variable.
Note that the variable might have been freed, there is no runtime check
for that.

*/

#include <iostream>

class Point
{
public:
    int x, y;
};

// Function that takes a point reference, note the &.
// The parameter refers to the same variable as the one
// used when the function was called and can thus change it.
void func(Point& p)
{
    p.x = 5;
    p.y = 6;
}

int main()
{
    Point p;

    p.x = 2;
    p.y = 3;

    std::cout << "x: " << p.x << std::endl;
    std::cout << "y: " << p.y << std::endl;

    std::cout << std::endl;

    // Pass p to function. The function signature decides if this creates a
    // copy or if it is passed as a reference.
    func(p);

    std::cout << "x: " << p.x << std::endl;
    std::cout << "y: " << p.y << std::endl;

    std::cout << std::endl;

    return 0;
}
