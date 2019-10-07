#ifndef SCREEN_H
#define SCREEN_H

#include "iscreen.h"

// Implementation of the screen interface
class Screen : public IScreen
{
public:
    // Override the pure virtual base function
    virtual void set_pixel(int x, int y, unsigned int color);
};

#endif
