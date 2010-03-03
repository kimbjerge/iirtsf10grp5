/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode2
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Mode2.cpp
*********************************************************************/

//## auto_generated
#include "Mode2.h"
//## operation chMode(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance()
#include "ESXState.h"
//## dependency Mode1
#include "Mode1.h"
//## dependency Mode3
#include "Mode3.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency Ready
#include "Ready.h"
//## dependency Suspended
#include "Suspended.h"
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
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Mode2.cpp
*********************************************************************/
