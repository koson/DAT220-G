#ifndef STATEEXIT_H
#define STATEEXIT_H

#include "state.h"

class StateExit : public State {
    void GoNext(Machine &machine);
};

#endif
