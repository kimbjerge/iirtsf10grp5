/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode1
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Mode1.cpp
*********************************************************************/

//## auto_generated
#include "Mode1.h"
//## operation chMode(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance()
#include "ESXState.h"
//## dependency Mode2
#include "Mode2.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency Ready
#include "Ready.h"
//## package Default

//## class Mode1
ESXState* Mode1::_instance = 0;

Mode1::Mode1() {
}

Mode1::~Mode1() {
}

ESXState* Mode1::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Mode1;
    }
    return _instance;
    //#]
}

void Mode1::chMode(EmbeddedSystemX* esx) {
    //#[ operation chMode(EmbeddedSystemX*)
    ChangeState(esx, Mode2::Instance());
    //#]
}

void Mode1::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode1");
    //#]
}

void Mode1::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

ESXState* Mode1::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Mode1.cpp
*********************************************************************/
