/********************************************************************
	Rhapsody	: 7.5
	Login		: phm
	Component	: DefaultComponent
	Configuration 	: LinuxSource
	Model Element	: Failure
//!	Generated Date	: Mon, 15, Feb 2010
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Failure.cpp
*********************************************************************/

//## auto_generated
#include "Failure.h"
//## operation Exit(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## package Default

//## class Failure
ESXState* Failure::_instance = 0;

Failure::Failure() {
}

Failure::~Failure() {
}

void Failure::Exit(EmbeddedSystemX* esx) {
    //#[ operation Exit(EmbeddedSystemX*)
    defaultChange();
    //#]
}

ESXState* Failure::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Failure;
    }
    return _instance;
    //#]
}

void Failure::Restart(EmbeddedSystemX* esx) {
    //#[ operation Restart(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void Failure::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

void Failure::DisplayState() {
    //#[ operation DisplayState()
    Display("Failure");
    //#]
}

ESXState* Failure::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Failure.cpp
*********************************************************************/
