#include "initializedstate.h"
#include "runningstate.h"

SimState* InitializedState::instance = 0;

InitializedState::InitializedState()
{
    this->name = "Initialized";
}

SimState* InitializedState::GetInstance(){
    if(instance == 0){
       instance = new InitializedState;
    }
    return instance;
}

void InitializedState::Start()
{
    this->controller->GetSimulatorRealtime()->StartSimulation();
    this->ChangeState(RunningState::GetInstance());
}
