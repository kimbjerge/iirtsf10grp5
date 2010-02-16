/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode2
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Mode2.cpp
*********************************************************************/

//## auto_generated
#include "Mode2.h"
//## operation chMode(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance()
#include "ESXState.h"
//## dependency Mode3
#include "Mode3.h"
//## package Default

//## class Mode2
ESXState* Mode2::_instance;

Mode2::Mode2() {
}

Mode2::~Mode2() {
}

ESXState* Mode2::Instance() {
    //#[ operation Instance()
     if (_instance == 0)
    {
    	_instance = new Mode2;
    }
    return _instance;
    //#]
}

void Mode2::chMode(EmbeddedSystemX* esx) {
    //#[ operation chMode(EmbeddedSystemX*)
    ChangeState(esx, Mode3::Instance());
    //#]
}

void Mode2::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode2");
    //#]
}

void Mode2::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

ESXState* Mode2::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Mode2.cpp
*********************************************************************/
