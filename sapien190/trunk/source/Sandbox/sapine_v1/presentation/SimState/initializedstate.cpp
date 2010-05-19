#include "initializedstate.h"

InitializedState::InitializedState(UIController* controller) : SimState(controller)
{
    this->name = "Initialized";
}

void InitializedState::Start()
{
    this->controller->GetSimulatorRealtime()->StartSimulation();
}
