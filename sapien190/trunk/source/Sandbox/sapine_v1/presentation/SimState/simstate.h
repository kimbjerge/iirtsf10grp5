#ifndef SIMSTATE_H
#define SIMSTATE_H

#include "SimulatorRealtime.h"
#include "presentation/uicontroller.h"

class SimState
{
public:
    static SimState* GetInstance();
    virtual void Initialize(Record*,SimulatorRealtime::MODEL_TYPES,SimulatorRealtime::MEDICINE_TYPES);
    virtual void Start();
    virtual void Stop();
    virtual void Pause();
    virtual void Resume();
    void Default();
    void SetSapienApplication(UIController*);
protected:
    SimState();
    void ChangeState(SimState*);
    UIController* controller;
    string name;
    static SimState* instance;
};

#endif // SIMSTATE_H
