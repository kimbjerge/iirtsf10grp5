#include "startcommand.h"
#include "simstate.h"

StartCommand::StartCommand()
{
}

void StartCommand::Execute()
{
    this->state->Start();
}
