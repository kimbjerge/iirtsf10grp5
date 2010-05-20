#ifndef RUNNINGSTATE_H
#define RUNNINGSTATE_H

#include "simstate.h"

class SapienApplication;

class RunningState : public SimState
{
public:
    RunningState(UIController*);
    virtual void Pause();
    virtual void Stop();
};

#endif // RUNNINGSTATE_H
