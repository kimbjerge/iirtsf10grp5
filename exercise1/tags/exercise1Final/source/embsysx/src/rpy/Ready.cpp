/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Ready
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Ready.cpp
*********************************************************************/

//## auto_generated
#include "Ready.h"
//## operation Configure(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance()
#include "ESXState.h"
//## dependency Mode1
#include "Mode1.h"
//## package Default

//## class Ready
ESXState* Ready::_instance;

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
    ChangeState(esx, Mode1::Instance());
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
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Ready.cpp
*********************************************************************/
