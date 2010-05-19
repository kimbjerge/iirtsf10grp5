#include "simstate.h"
#include "initializedstate.h"

SimState::SimState(UIController* controller)
{
    this->controller = controller;
    this->name = "SimState";
}

void SimState::Initialize(Record * record, SimulatorRealtime::MODEL_TYPES type,SimulatorRealtime::MEDICINE_TYPES medicin){

    this->controller->GetSimulatorRealtime()->SetSampleRate(1);

    this->controller->GetSimulatorRealtime()->CreatePatientModel(type);

    this->controller->GetSimulatorRealtime()->SetRecord(record);

    this->controller->GetSimulatorRealtime()->SetMedicine(medicin);

    this->ChangeState(new InitializedState(this->controller));

}

void SimState::Start()
{
 //
    this->controller->GetSimulatorRealtime()->StartSimulation();
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
    this->controller->ChangeState(simState);
}
