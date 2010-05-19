#include "pausedstate.h"
#include "runningstate.h"

PausedState::PausedState(UIController* controller) : SimState(controller)
{

}

void PausedState::Resume(){
    this->ChangeState(new RunningState(this->controller));
}

void PausedState::Stop(){
    this->ChangeState(new RunningState(this->controller));
}
