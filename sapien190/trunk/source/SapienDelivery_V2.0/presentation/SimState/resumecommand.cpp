#include "resumecommand.h"
#include "simstate.h"

ResumeCommand::ResumeCommand()
{
}

void ResumeCommand::Execute()
{
    this->state->Resume();
}

