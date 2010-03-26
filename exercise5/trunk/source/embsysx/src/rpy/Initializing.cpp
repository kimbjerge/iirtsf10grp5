/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Initializing
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Initializing.cpp
*********************************************************************/

//## auto_generated
#include "Initializing.h"
//## operation Initialized(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency Operational
#include "Operational.h"
//## package Application::Discrete

//## class Initializing
ESXState* Initializing::_instance = 0;

Initializing::Initializing() {
}

Initializing::~Initializing() {
}

void Initializing::Initialized(EmbeddedSystemX* esx) {
    //#[ operation Initialized(EmbeddedSystemX*)
    ChangeState(esx, Operational::Instance());
    //#]
}

ESXState* Initializing::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Initializing;
    }
    return _instance;
    //#]
}

void Initializing::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

void Initializing::DisplayState() {
    //#[ operation DisplayState()
    Display("Initializing");
    //#]
}

ESXState* Initializing::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Initializing.cpp
*********************************************************************/
