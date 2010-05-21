#include "uicontroller.h"
#include "SimState/simstate.h"

UIController::UIController(QObject *parent) :
    QObject(parent)
{

    connect(&sim,SIGNAL(ButtonPushed(SimCommand*)),this,SLOT(SimulatorButtonPushed(SimCommand*)), Qt::QueuedConnection);

    connect(&sim,SIGNAL(ParameterChanged(Parameter*)),this,SLOT(SimulatorParameterChanged(Parameter*)), Qt::QueuedConnection);

    // Create the SimulatorRelatim system and configurate

    itsSimulatorRealtime = SimulatorRealtime::Instance(50);

    itsSimulatorRealtime->AttachObserver(&sim);

    this->simState = new SimState(this);
}

void UIController::start() {
    sim.show();
    Record * record;
    record = itsSimulatorRealtime->CreateWfdbRecord("e0103","atr");
    //record = itsSimulatorRealtime->CreateWfdbRecord("e0104","atr");

    this->simState->Initialize(record, SimulatorRealtime::Normal, SimulatorRealtime::Morphine);
}

void UIController::SimulatorButtonPushed(SimCommand * simCommand) {
    simCommand->setState(this->simState);
    simCommand->Execute();
    delete simCommand;
}

void UIController::SimulatorParameterChanged(Parameter * simParameter) {
    simParameter->Execute(itsSimulatorRealtime);
}

void UIController::ChangeState(SimState * simState){
    delete this->simState;
    this->simState = simState;
}

SimulatorRealtime* UIController::GetSimulatorRealtime(){
    return this->itsSimulatorRealtime;
}

