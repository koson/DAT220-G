#ifdef SIMULATOR

#include "gui/model/Hal.hpp"

void Hal::init()
{
    // Do... nothing?
}

void Hal::setLed(bool on)
{
    // Uh.... Show led on screen?
}

bool Hal::getButton()
{
    static int frame = 0;
    frame++;

    // Click button once per second
    if (frame % 60 == 0)
        return true;

    return false;
}

#endif
