#include "simcommand.h"
#include "simstate.h"

SimCommand::SimCommand()
{
}

void SimCommand::setState(SimState * state){
    this->state = state;
}
