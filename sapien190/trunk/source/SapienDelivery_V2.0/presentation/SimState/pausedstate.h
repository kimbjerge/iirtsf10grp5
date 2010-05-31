#ifndef PAUSEDSTATE_H
#define PAUSEDSTATE_H

#include "simstate.h"

class SapienApplication;

class PausedState : public SimState
{
public:

    static SimState* GetInstance();
    virtual void Resume();
    virtual void Stop();
protected:
    PausedState();
    static SimState* instance;
};

#endif // PAUSEDSTATE_H
