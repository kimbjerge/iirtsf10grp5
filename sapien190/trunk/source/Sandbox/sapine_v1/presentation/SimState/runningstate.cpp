#include "runningstate.h"
#include "pausedstate.h"
#include "initializedstate.h"

#include "presentation/sapienapplication.h""

RunningState::RunningState(SapienApplication* app) : SimState(app)
{
}

void RunningState::Pause(){
    this->ChangeState(new PausedState(this->sapienApp));
}

void RunningState::Stop(){
    this->sapienApp->GetSimulatorRealtime()->StopSimulation();
    this->ChangeState(new InitializedState(this->sapienApp));
}
