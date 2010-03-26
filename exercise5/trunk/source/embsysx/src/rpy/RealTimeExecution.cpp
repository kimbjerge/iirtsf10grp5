/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: RealTimeExecution
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeExecution.cpp
*********************************************************************/

//## auto_generated
#include "RealTimeExecution.h"
//## operation Instance(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Simulate(RealTimeLoop*,EmbeddedSystemX*)
#include "RealTimeLoop.h"
//## dependency Simulation
#include "Simulation.h"
//## package Application::Discrete

//## class RealTimeExecution
SimulateAndState* RealTimeExecution::_instance = 0;

RealTimeExecution::RealTimeExecution() {
}

RealTimeExecution::~RealTimeExecution() {
}

void RealTimeExecution::DisplayState() {
    //#[ operation DisplayState()
    Display("RealTimeExecution");
    //#]
}

SimulateAndState* RealTimeExecution::Instance(EmbeddedSystemX* esx) {
    //#[ operation Instance(EmbeddedSystemX*)
    if (_instance == 0)
    {
    	_instance = new RealTimeExecution;
    }
    return _instance;
    //#]
}

void RealTimeExecution::Simulate(RealTimeLoop* rtl, EmbeddedSystemX* esx) {
    //#[ operation Simulate(RealTimeLoop*,EmbeddedSystemX*)
    ChangeState(rtl, Simulation::Instance(esx));
    //#]
}

SimulateAndState* RealTimeExecution::get_instance() {
    return _instance;
}

void RealTimeExecution::set_instance(SimulateAndState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeExecution.cpp
*********************************************************************/
