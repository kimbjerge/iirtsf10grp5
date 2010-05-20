#ifndef PAUSEDSTATE_H
#define PAUSEDSTATE_H

#include "simstate.h"

class SapienApplication;

class PausedState : public SimState
{
public:
    PausedState(UIController*);
    virtual void Resume();
    virtual void Stop();
};

#endif // PAUSEDSTATE_H
