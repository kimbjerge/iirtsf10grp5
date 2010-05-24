#ifndef RECORDPARAMETER_H
#define RECORDPARAMETER_H
#include "Parameter.h"
#include "Record.h"

class SimulatorRealtime;

class RecordParameter : public Parameter
{
public:
    RecordParameter();
    void Execute(SimulatorRealtime* ps);

   void SetRecord(string);
   string GetRecord();
private:
   string record;
};

#endif // RECORDPARAMETER_H
