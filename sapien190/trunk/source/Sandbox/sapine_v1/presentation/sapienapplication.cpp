#include "sapienapplication.h"
#include "SimState/simstate.h"

SapienApplication::SapienApplication(int argc, char *argv[]) : QApplication(argc,argv)
{
    sim.show();

    connect(&sim,SIGNAL(ButtonPushed(SimCommand*)),this,SLOT(SimulatorButtonPushed(SimCommand*)), Qt::QueuedConnection);

    Record * record;

    // Create the SimulatorRelatim system and configurate

    itsSimulatorRealtime = new SimulatorRealtime(200);

    itsSimulatorRealtime->AttachObserver(&sim);

    record = itsSimulatorRealtime->CreateWfdbRecord("e0104","ECG");

    this->simState = new SimState(this);

    this->simState->Initialize(record,SimulatorRealtime::Normal,SimulatorRealtime::Morphine);

  //  itsSimulatorRealtime->StartSimulation();
   // this->simState->Start();

}

void SapienApplication::SimulatorButtonPushed(SimCommand * simCommand){
    simCommand->setState(this->simState);
    simCommand->Execute();
    }

void SapienApplication::ChangeState(SimState * simState){
    this->simState = simState;
}

SimulatorRealtime* SapienApplication::GetSimulatorRealtime(){
    return this->itsSimulatorRealtime;
}
