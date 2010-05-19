#ifndef INITIALIZEDSTATE_H
#define INITIALIZEDSTATE_H

#include "simstate.h"

class InitializedState : public SimState
{
public:
    InitializedState(UIController*);
    void Start();
};

#endif // INITIALIZEDSTATE_H
