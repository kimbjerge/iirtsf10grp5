#include "simstate.h"
#include "initializedstate.h"


SimState* SimState::instance = 0;

SimState::SimState()
{
    this->name = "SimState";
}

SimState* SimState::GetInstance(){
    if(instance == 0){
        instance = new SimState;
    }
    return instance;
}

void SimState::Initialize(Record * record, SimulatorRealtime::MODEL_TYPES type, SimulatorRealtime::MEDICINE_TYPES medicin){

    this->controller->GetSimulatorRealtime()->SetSampleRate(250);

    this->controller->GetSimulatorRealtime()->CreatePatientModel(type);

    this->controller->GetSimulatorRealtime()->SetRecord(record);

    this->controller->GetSimulatorRealtime()->SetMedicine(medicin);

    this->ChangeState(InitializedState::GetInstance());

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

void SimState::SetSapienApplication(UIController * controller){
    this->controller = controller;
}

