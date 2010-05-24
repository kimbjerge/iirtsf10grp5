#include "pausedstate.h"
#include "runningstate.h"
#include "initializedstate.h"

SimState* PausedState::instance = 0;

PausedState::PausedState()
{
    this->name = "Paused";
}

SimState* PausedState::GetInstance(){
    if(instance == 0){
        instance = new PausedState;
    }
    return instance;
}

void PausedState::Resume(){
    // To be inserted
    this->controller->GetSimulatorRealtime()->ResumeSimulation();
    this->ChangeState(RunningState::GetInstance());
}

void PausedState::Stop(){
    this->controller->GetSimulatorRealtime()->StopSimulation();
    this->ChangeState(InitializedState::GetInstance());
}
