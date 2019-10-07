#include <iostream>

#include "stateexit.h"
#include "machine.h"

void StateExit::GoNext(Machine &machine)
{
    std::cout << "Exiting..." << std::endl;
    machine.SetRunning(false);
}
