/*

Shows how to pass state by dependency injection

Dependencies can be passed by reference (const or otherwise), or pointers.

For design pattern examples see:
http://sourcemaking.com/design_patterns

*/

#include <iostream>

#include "iscreen.h"
#include "screen.h"

// Do something, requires (depends on) the screen object.
// Note that it takes a base class reference, that way you can use mock
// objects for automatic testing etc.
void func(IScreen& screen)
{
    screen.set_pixel(100, 100, 0xff00ff);
}

// Class that depends on a screen object. Base reference passed to constructor.
class Object
{
public:
    Object(IScreen& screen) : screen(screen) { }

    void func()
    {
        screen.set_pixel(100, 100, 0xff00ff);
    }

protected:
    IScreen& screen;
};

int main()
{
    // Create the object we depend on
    Screen s;

    // Pass dependency to function
    func(s);

    // Pass dependency to class constructor
    Object o(s);

    // Use dependency inside function
    o.func();

    return 0;
}
