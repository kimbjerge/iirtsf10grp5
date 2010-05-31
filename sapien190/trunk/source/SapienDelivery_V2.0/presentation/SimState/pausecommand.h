#ifndef PAUSECOMMAND_H
#define PAUSECOMMAND_H

#include "simcommand.h"

class PauseCommand : public SimCommand
{
public:
    PauseCommand();
    void Execute();
};

#endif // PAUSECOMMAND_H
