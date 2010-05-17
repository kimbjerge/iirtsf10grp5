#include "simstate.h"
#include "initializedstate.h"

SimState::SimState(SapienApplication* sapienApp)
{
    this->sapienApp = sapienApp;
}

void SimState::Initialize(Record * record, SimulatorRealtime::MODEL_TYPES type,SimulatorRealtime::MEDICINE_TYPES medicin){

    this->sapienApp->GetSimulatorRealtime()->AlternateRecord(record);

    this->sapienApp->GetSimulatorRealtime()->CreatePatientModel(type);

    this->sapienApp->GetSimulatorRealtime()->AlternateRecord(record);

    this->sapienApp->GetSimulatorRealtime()->SetMedicine(medicin);

    this->ChangeState(new InitializedState(this->sapienApp));

}

void SimState::Start()
{

}

void SimState::Pause()
{
}

void SimState::Resume()
{
}

void SimState::Stop()
{
}

void SimState::ChangeState(SimState * simState){
    this->sapienApp->ChangeState(simState);
}
