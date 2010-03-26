/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: SimulateAndState
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SimulateAndState.cpp
*********************************************************************/

//## auto_generated
#include "SimulateAndState.h"
//## operation RunRealTime(RealTimeLoop*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## package Application::Discrete

//## class SimulateAndState
SimulateAndState::SimulateAndState() {
}

SimulateAndState::~SimulateAndState() {
}

void SimulateAndState::RunRealTime(RealTimeLoop* rtl, EmbeddedSystemX* esx) {
    //#[ operation RunRealTime(RealTimeLoop*,EmbeddedSystemX*)
    defaultChange();
    //#]
}

void SimulateAndState::Simulate(RealTimeLoop* rtl, EmbeddedSystemX* esx) {
    //#[ operation Simulate(RealTimeLoop*,EmbeddedSystemX*)
    defaultChange();
    //#]
}

void SimulateAndState::ChangeState(RealTimeLoop* rtl, SimulateAndState* state) {
    //#[ operation ChangeState(RealTimeLoop*,SimulateAndState*)
    rtl->ChangeSimulateAndState(state);
    //#]
}

void SimulateAndState::Display(char* name) {
    //#[ operation Display(char*)
    std::cout << name;
    //#]
}

void SimulateAndState::DisplayState() {
    //#[ operation DisplayState()
    Display("SimulateAndState");
    //#]
}

void SimulateAndState::defaultChange() {
    //#[ operation defaultChange()
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SimulateAndState.cpp
*********************************************************************/
