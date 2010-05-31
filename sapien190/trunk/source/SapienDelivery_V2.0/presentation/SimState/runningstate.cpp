#include "runningstate.h"
#include "pausedstate.h"
#include "initializedstate.h"

#include "presentation/uicontroller.h"

SimState* RunningState::instance = 0;

RunningState::RunningState()
{
    this->name = "Running";
}

SimState* RunningState::GetInstance(){
    if(instance == 0){
        instance = new RunningState;
    }
    return instance;
}

void RunningState::Pause(){
    this->controller->GetSimulatorRealtime()->PauseSimulation();
    this->ChangeState(PausedState::GetInstance());
}

void RunningState::Stop(){
    this->controller->GetSimulatorRealtime()->StopSimulation();
    this->ChangeState(InitializedState::GetInstance());
}
