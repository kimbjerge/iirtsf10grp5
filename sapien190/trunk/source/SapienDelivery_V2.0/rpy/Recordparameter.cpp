#include "Recordparameter.h"
#include "SimulatorRealtime.h"
#include "Record.h"

RecordParameter::RecordParameter()
{
}


void RecordParameter::SetRecord(string record)
{

    this->record = record;
}


string RecordParameter::GetRecord()
{
    return this->record;
}

void RecordParameter::Execute(SimulatorRealtime *ps){
    Record* record = ps->CreateWfdbRecord((char*)this->record.c_str(),"atr");
    ps->AlternateRecord(record);
}


