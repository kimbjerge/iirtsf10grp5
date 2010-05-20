#ifndef SIMSTATE_H
#define SIMSTATE_H

#include "SimulatorRealtime.h"
#include "presentation/uicontroller.h"

class SimState
{
public:
    SimState(UIController*);
    virtual void Initialize(Record*,SimulatorRealtime::MODEL_TYPES,SimulatorRealtime::MEDICINE_TYPES);
    virtual void Start();
    virtual void Stop();
    virtual void Pause();
    virtual void Resume();
    void Default();
    void SetSapienApplication(UIController*);
protected:
    void ChangeState(SimState*);
    UIController* controller;
    string name;
};

#endif // SIMSTATE_H
