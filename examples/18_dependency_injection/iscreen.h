#ifndef ISCREEN_H
#define ISCREEN_H

// Interface class for a screen.
// Interfaces usually do not have .cpp files, as they have no implementation.
class IScreen
{
public:
    // This function is pure virtual, making the class abstract.
    // This function must be virtual so that derived classes can override it.
    virtual void set_pixel(int x, int y, unsigned int color) = 0;
};

#endif
