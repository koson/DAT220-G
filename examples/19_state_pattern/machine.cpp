#include "machine.h"
#include "state.h"
#include "statehello.h"
#include "stategoodbye.h"
#include "stateexit.h"

Machine::Machine()
{
    // Start the machine running
    running = true;

    // Start in the hello state
    state = StateId::HELLO;

    // Add states to the state map
    states.emplace(StateId::HELLO, new StateHello());
    states.emplace(StateId::GOODBYE, new StateGoodbye());
    states.emplace(StateId::EXIT, new StateExit());
}

Machine::~Machine()
{
    // Free the states from memory
    for (auto state: states)
        delete state.second;

    states.clear();
}

void Machine::GoNext()
{
    states[state]->GoNext(*this);
}

void Machine::SetState(StateId state)
{
    this->state = state;
}
