#include "pausedstate.h"
#include "runningstate.h"

PausedState::PausedState(UIController* controller) : SimState(controller)
{
    this->name = "Paused";
}

void PausedState::Resume(){
    // To be inserted
    this->controller->GetSimulatorRealtime()->ResumeSimulation();
    this->ChangeState(new RunningState(this->controller));
}

void PausedState::Stop(){
    this->controller->GetSimulatorRealtime()->StopSimulation();
    this->ChangeState(new RunningState(this->controller));
}
