#include "pausecommand.h"
#include "simstate.h"

PauseCommand::PauseCommand()
{
}

void PauseCommand::Execute()
{
    this->state->Pause();
}
