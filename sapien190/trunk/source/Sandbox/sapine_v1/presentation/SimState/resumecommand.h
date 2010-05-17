#ifndef RESUMECOMMAND_H
#define RESUMECOMMAND_H

#include "simcommand.h"

class ResumeCommand : public SimCommand
{
public:
    ResumeCommand();
    void Execute();
};

#endif // RESUMECOMMAND_H
