#include "presentation/controller.h"
#include "SimState/simstate.h"

Controller::Controller(QObject *parent) :
    QObject(parent)
{

    connect(&sim,SIGNAL(ButtonPushed(SimCommand*)),this,SLOT(SimulatorButtonPushed(SimCommand*)), Qt::QueuedConnection);

    // Create the SimulatorRelatim system and configurate

    itsSimulatorRealtime = new SimulatorRealtime(200);

    itsSimulatorRealtime->AttachObserver(&sim);

    this->simState = new SimState(this);

}


void Controller::start(){
    sim.show();
    Record * record;
    record = itsSimulatorRealtime->CreateWfdbRecord("e0104","ECG");

    this->simState->Initialize(record,SimulatorRealtime::Normal,SimulatorRealtime::Morphine);
    this->itsSimulatorRealtime->StartSimulation();
}

void Controller::SimulatorButtonPushed(SimCommand * simCommand){
    simCommand->setState(this->simState);
    simCommand->Execute();
    }

void Controller::ChangeState(SimState * simState){
    this->simState = simState;
}

SimulatorRealtime* Controller::GetSimulatorRealtime(){
    return this->itsSimulatorRealtime;
}
