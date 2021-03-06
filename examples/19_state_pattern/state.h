#ifndef STATE_H
#define STATE_H

class Machine;

class State
{
public:
    State() {}
    virtual ~State() {};
    virtual void GoNext(Machine &context) = 0;
};

#endif
