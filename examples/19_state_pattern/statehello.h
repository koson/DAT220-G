#ifndef STATEHELLO_H
#define STATEHELLO_H

#include "state.h"

class StateHello : public State
{
public:
    void GoNext(Machine &machine);
};

#endif
