#ifndef INITIALIZEDSTATE_H
#define INITIALIZEDSTATE_H

#include "simstate.h"

class InitializedState : public SimState
{
public:
    static SimState* GetInstance();
    virtual void Start();
protected:
        InitializedState();
        static SimState* instance;

};

#endif // INITIALIZEDSTATE_H
