#ifndef RUNNINGSTATE_H
#define RUNNINGSTATE_H

#include "simstate.h"

class SapienApplication;

class RunningState : public SimState
{
public:
    RunningState(SapienApplication*);
    void Pause();
    void Stop();
};

#endif // RUNNINGSTATE_H
