#include "pausedstate.h"
#include "presentation/sapienapplication.h"
#include "runningstate.h"

PausedState::PausedState(SapienApplication* app) : SimState(app)
{

}

void PausedState::Resume(){
    this->ChangeState(new RunningState(this->sapienApp));
}
