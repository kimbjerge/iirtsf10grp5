#ifndef SIMSTATE_H
#define SIMSTATE_H

#include "SimulatorRealtime.h"
#include "presentation/sapienapplication.h"

class SimState
{
public:
    SimState(SapienApplication*);
    void Initialize(Record*,SimulatorRealtime::MODEL_TYPES,SimulatorRealtime::MEDICINE_TYPES);
    void Start();
    void Stop();
    void Pause();
    void Resume();
    void SetSapienApplication(SapienApplication*);
protected:
    void ChangeState(SimState*);
    SapienApplication* sapienApp;
};

#endif // SIMSTATE_H
