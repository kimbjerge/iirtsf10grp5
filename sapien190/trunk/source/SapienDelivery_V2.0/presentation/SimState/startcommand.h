#ifndef STARTCOMMAND_H
#define STARTCOMMAND_H

#include "simcommand.h"

class StartCommand : public SimCommand
{
public:
    StartCommand();
    void Execute();
};

#endif // STARTCOMMAND_H
