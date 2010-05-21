#include "runningstate.h"
#include "pausedstate.h"
#include "initializedstate.h"

#include "presentation/uicontroller.h"

RunningState::RunningState(UIController* controller) : SimState(controller)
{
    this->name = "Running";
}

void RunningState::Pause(){
    this->controller->GetSimulatorRealtime()->PauseSimulation();
    this->ChangeState(new PausedState(this->controller));
}

void RunningState::Stop(){
    this->controller->GetSimulatorRealtime()->StopSimulation();
    this->ChangeState(new InitializedState(this->controller));
}
