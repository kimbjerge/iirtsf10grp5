#include "stopcommand.h"
#include "simstate.h"

StopCommand::StopCommand()
{
}

void StopCommand::Execute()
{
    this->state->Stop();
}
