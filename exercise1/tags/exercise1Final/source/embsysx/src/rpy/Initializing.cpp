/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Initializing
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Initializing.cpp
*********************************************************************/

//## auto_generated
#include "Initializing.h"
//## operation Initialized(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency Ready
#include "Ready.h"
//## package Default

//## class Initializing
ESXState* Initializing::_instance;

Initializing::Initializing() {
}

Initializing::~Initializing() {
}

void Initializing::Initialized(EmbeddedSystemX* esx) {
    //#[ operation Initialized(EmbeddedSystemX*)
    ChangeState(esx, Ready::Instance());
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
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Initializing.cpp
*********************************************************************/
