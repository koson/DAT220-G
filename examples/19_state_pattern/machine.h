#ifndef MACHINE_H
#define MACHINE_H

#include <map>

class State;

class Machine
{
public:
    enum class StateId { HELLO, GOODBYE, EXIT };

    Machine();
    ~Machine();

    void GoNext();
    void SetState(StateId state);
    bool GetRunning() const { return running; }
    void SetRunning(bool running) { this->running = running; }

protected:
    bool running;
    StateId state;
    std::map<StateId, State*> states;
};

#endif
