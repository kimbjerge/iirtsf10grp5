/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Suspended
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Suspended.cpp
*********************************************************************/

//## auto_generated
#include "Suspended.h"
//## operation Resume(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance()
#include "ESXState.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency Ready
#include "Ready.h"
//## dependency RealTimeLoop
#include "RealTimeLoop.h"
//## package Application::Discrete

//## class Suspended
ESXState* Suspended::_instance = 0;

Suspended::Suspended() {
}

Suspended::~Suspended() {
}

void Suspended::DisplayState() {
    //#[ operation DisplayState()
    Display("Suspended");
    //#]
}

ESXState* Suspended::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Suspended;
    }
    return _instance;
    //#]
}

void Suspended::Resume(EmbeddedSystemX* esx) {
    //#[ operation Resume(EmbeddedSystemX*)
    ChangeState(esx, RealTimeLoop::Instance(esx));
    //#]
}

void Suspended::Stop(EmbeddedSystemX* esx) {
    //#[ operation Stop(EmbeddedSystemX*)
    ChangeState(esx, Ready::Instance());
    //#]
}

ESXState* Suspended::get_instance() {
    return _instance;
}

void Suspended::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Suspended.cpp
*********************************************************************/
