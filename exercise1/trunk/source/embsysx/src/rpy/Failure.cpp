/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Failure
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Failure.cpp
*********************************************************************/

//## auto_generated
#include "Failure.h"
//## operation Exit(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## package Default

//## class Failure
ESXState* Failure::_instance = 0;

Failure::Failure() {
}

Failure::~Failure() {
}

void Failure::Exit(EmbeddedSystemX* esx) {
    //#[ operation Exit(EmbeddedSystemX*)
    //exit(1);
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
    ChangeState(esx, PowerOnSelfTest::Instance());
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
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Failure.cpp
*********************************************************************/
