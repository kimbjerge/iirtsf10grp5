/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Initializing
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Initializing.cpp
*********************************************************************/

//## auto_generated
#include "Initializing.h"
//## operation Initialized(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency Ready
#include "Ready.h"
//## package Discrete

//## class Initializing
ESXState* Initializing::_instance;

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
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Initializing.cpp
*********************************************************************/
