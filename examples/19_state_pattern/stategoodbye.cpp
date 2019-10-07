#include <iostream>

#include "stategoodbye.h"
#include "machine.h"

void StateGoodbye::GoNext(Machine &machine)
{
    std::cout << "Goodbye, World!" << std::endl;

    std::string input;
    std::getline(std::cin, input);

    if (input == "hello")
        machine.SetState(Machine::StateId::HELLO);
    else if (input == "exit")
        machine.SetState(Machine::StateId::EXIT);
}
