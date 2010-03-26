/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Ready
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Ready.cpp
*********************************************************************/

//## auto_generated
#include "Ready.h"
//## dependency Configuration
#include "Configuration.h"
//## operation Configure(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance()
#include "ESXState.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency RealTimeLoop
#include "RealTimeLoop.h"
//## package Application::Discrete

//## class Ready
ESXState* Ready::_instance = 0;

Ready::Ready() {
}

Ready::~Ready() {
}

void Ready::Configure(EmbeddedSystemX* esx) {
    //#[ operation Configure(EmbeddedSystemX*)
    ChangeState(esx, Configuration::Instance());
    //#]
}

void Ready::DisplayState() {
    //#[ operation DisplayState()
    Display("Ready");
    //#]
}

ESXState* Ready::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Ready;
    }
    return _instance;
    //#]
}

void Ready::Start(EmbeddedSystemX* esx) {
    //#[ operation Start(EmbeddedSystemX*)
    ChangeState(esx, RealTimeLoop::Instance(esx));
    esx->start();
    //#]
}

ESXState* Ready::get_instance() {
    return _instance;
}

void Ready::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Ready.cpp
*********************************************************************/
