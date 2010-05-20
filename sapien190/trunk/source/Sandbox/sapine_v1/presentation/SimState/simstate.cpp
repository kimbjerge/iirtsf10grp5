#include "simstate.h"
#include "initializedstate.h"

SimState::SimState(UIController* controller)
{
    this->controller = controller;
    this->name = "SimState";
}

void SimState::Initialize(Record * record, SimulatorRealtime::MODEL_TYPES type, SimulatorRealtime::MEDICINE_TYPES medicin){

    this->controller->GetSimulatorRealtime()->SetSampleRate(50);

    this->controller->GetSimulatorRealtime()->CreatePatientModel(type);

    this->controller->GetSimulatorRealtime()->SetMedicine(medicin);

    this->controller->GetSimulatorRealtime()->SetRecord(record);

    this->ChangeState(new InitializedState(this->controller));

}

void SimState::Start()
{
    this->Default();
}

void SimState::Pause()
{
    this->Default();
}

void SimState::Resume()
{
    this->Default();
}

void SimState::Stop()
{
    this->Default();
}

void SimState::Default()
{
    cout << "No action" << endl;
}

void SimState::ChangeState(SimState * simState){
    this->controller->ChangeState(simState);
}
