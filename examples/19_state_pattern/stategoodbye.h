#ifndef STATEGOODBYE_H
#define STATEGOODBYE_H

#include "state.h"

class StateGoodbye : public State
{
public:
    void GoNext(Machine &machine);
};

#endif
