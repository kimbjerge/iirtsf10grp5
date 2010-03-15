/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Ready
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Ready.cpp
*********************************************************************/

//## auto_generated
#include "Ready.h"
//## operation Configure(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance()
#include "ESXState.h"
//## dependency Configuration
#include "Configuration.h"
//## dependency Mode1
#include "Mode1.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## package Discrete

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

void Ready::DisplayState() {
    //#[ operation DisplayState()
    Display("Ready");
    //#]
}

void Ready::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

ESXState* Ready::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Ready.cpp
*********************************************************************/
