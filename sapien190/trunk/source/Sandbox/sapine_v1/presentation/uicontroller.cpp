#include "uicontroller.h"
#include "SimState/simstate.h"

UIController::UIController(QObject *parent) :
    QObject(parent)
{

    connect(&sim,SIGNAL(ButtonPushed(SimCommand*)),this,SLOT(SimulatorButtonPushed(SimCommand*)), Qt::QueuedConnection);

    // Create the SimulatorRelatim system and configurate

    itsSimulatorRealtime = new SimulatorRealtime(200);

    itsSimulatorRealtime->AttachObserver(&sim);

    this->simState = new SimState(this);
}

void UIController::start(){
    sim.show();
    Record * record;
    record = itsSimulatorRealtime->CreateWfdbRecord("e0104","ECG");

    this->simState->Initialize(record,SimulatorRealtime::Normal,SimulatorRealtime::Morphine);
 //   this->itsSimulatorRealtime->StartSimulation();
}

void UIController::SimulatorButtonPushed(SimCommand * simCommand){
    simCommand->setState(this->simState);
    simCommand->Execute();
    }

void UIController::ChangeState(SimState * simState){
    this->simState = simState;
}

SimulatorRealtime* UIController::GetSimulatorRealtime(){
    return this->itsSimulatorRealtime;
}

