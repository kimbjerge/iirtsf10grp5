/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode3
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Mode3.cpp
*********************************************************************/

//## auto_generated
#include "Mode3.h"
//## operation chMode(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance()
#include "ESXState.h"
//## dependency Mode1
#include "Mode1.h"
//## package Default

//## class Mode3
ESXState* Mode3::_instance;

Mode3::Mode3() {
}

Mode3::~Mode3() {
}

ESXState* Mode3::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Mode3;
    }
    return _instance;
    //#]
}

void Mode3::chMode(EmbeddedSystemX* esx) {
    //#[ operation chMode(EmbeddedSystemX*)
    ChangeState(esx, Mode1::Instance());
    //#]
}

void Mode3::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode3");
    //#]
}

void Mode3::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

ESXState* Mode3::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Mode3.cpp
*********************************************************************/
