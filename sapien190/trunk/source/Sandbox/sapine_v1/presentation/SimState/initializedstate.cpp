#include "initializedstate.h"
#include "runningstate.h"

InitializedState::InitializedState(UIController* controller) : SimState(controller)
{
    this->name = "Initialized";
}

void InitializedState::Start()
{
    this->controller->GetSimulatorRealtime()->StartSimulation();
    this->ChangeState(new RunningState(this->controller));
}
