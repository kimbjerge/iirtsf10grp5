#include "initializedstate.h"

InitializedState::InitializedState(SapienApplication* app) : SimState(app)
{
}

void InitializedState::Start()
{
    this->sapienApp->GetSimulatorRealtime()->StartSimulation();
}
