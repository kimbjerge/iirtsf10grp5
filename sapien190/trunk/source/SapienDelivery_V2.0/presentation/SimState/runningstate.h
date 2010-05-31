#ifndef RUNNINGSTATE_H
#define RUNNINGSTATE_H

#include "simstate.h"

class SapienApplication;

class RunningState : public SimState
{
public:
    static SimState* GetInstance();
    virtual void Pause();
    virtual void Stop();
protected:
    RunningState();
    static SimState* instance;
};

#endif // RUNNINGSTATE_H
