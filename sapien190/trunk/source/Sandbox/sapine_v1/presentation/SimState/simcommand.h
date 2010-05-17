#ifndef SIMCOMMAND_H
#define SIMCOMMAND_H

class SimState;

class SimCommand
{
public:
    SimCommand();

    void setState(SimState*);

    virtual void Execute() = 0;
protected:
    SimState* state;

};

#endif // SIMCOMMAND_H
