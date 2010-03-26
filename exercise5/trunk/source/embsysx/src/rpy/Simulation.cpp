/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Simulation
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Simulation.cpp
*********************************************************************/

//## auto_generated
#include "Simulation.h"
//## operation RunRealTime(RealTimeLoop*,EmbeddedSystemX*)
#include "RealTimeLoop.h"
//## link itsSimulatorTask
#include "SimulatorTask.h"
//## operation Instance(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency RealTimeExecution
#include "RealTimeExecution.h"
//## package Application::Discrete

//## class Simulation
Simulation* Simulation::_instance = 0;

Simulation::Simulation() {
    itsSimulatorTask = NULL;
}

void Simulation::DisplayState() {
    //#[ operation DisplayState()
    Display("Simulation");
    //#]
}

SimulateAndState* Simulation::Instance(EmbeddedSystemX* esx) {
    //#[ operation Instance(EmbeddedSystemX*)
    SimulatorTask *pSimulatorTask;
    if (_instance == 0)
    {
    	_instance = new Simulation;
    	pSimulatorTask = new SimulatorTask(esx->getItsRealTimeThread());
    	_instance->setItsSimulatorTask(pSimulatorTask);
    }
    pSimulatorTask = _instance->getItsSimulatorTask();  
    pSimulatorTask->start();
    return _instance;
    //#]
}

void Simulation::RunRealTime(RealTimeLoop* rtl, EmbeddedSystemX* esx) {
    //#[ operation RunRealTime(RealTimeLoop*,EmbeddedSystemX*)
    itsSimulatorTask->kill();
    ChangeState(rtl, RealTimeExecution::Instance(esx));
    //#]
}

SimulatorTask* Simulation::getItsSimulatorTask() const {
    return itsSimulatorTask;
}

void Simulation::setItsSimulatorTask(SimulatorTask* p_SimulatorTask) {
    itsSimulatorTask = p_SimulatorTask;
}

void Simulation::cleanUpRelations() {
    if(itsSimulatorTask != NULL)
        {
            itsSimulatorTask = NULL;
        }
}

Simulation* Simulation::get_instance() {
    return _instance;
}

Simulation::~Simulation() {
    //#[ operation ~Simulation()
    delete itsSimulatorTask;
    //#]
    cleanUpRelations();
}

void Simulation::set_instance(Simulation* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Simulation.cpp
*********************************************************************/
