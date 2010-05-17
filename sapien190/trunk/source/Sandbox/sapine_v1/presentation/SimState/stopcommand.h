#ifndef STOPCOMMAND_H
#define STOPCOMMAND_H

#include "simcommand.h"

class StopCommand : public SimCommand
{
public:
    StopCommand();
    void Execute();
};

#endif // STOPCOMMAND_H
