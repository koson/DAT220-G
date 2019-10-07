#include <iostream>

#include "statehello.h"
#include "machine.h"

void StateHello::GoNext(Machine &machine)
{
    std::cout << "Hello, World!" << std::endl;

    std::string input;
    std::getline(std::cin, input);

    if (input == "goodbye")
        machine.SetState(Machine::StateId::GOODBYE);
    else if (input == "exit")
        machine.SetState(Machine::StateId::EXIT);
}
