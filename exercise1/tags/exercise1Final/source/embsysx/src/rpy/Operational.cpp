/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Operational
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Operational.cpp
*********************************************************************/

//## auto_generated
#include "Operational.h"
//## operation Restart(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## package Default

//## class Operational
Operational* Operational::_instance;

Operational::~Operational() {
}

void Operational::Restart(EmbeddedSystemX* esx) {
    //#[ operation Restart(EmbeddedSystemX*)
    //KBE??? ChangeState(esx, PowerOnSelfTest::Instance());
    //#]
}

void Operational::DisplayState() {
    //#[ operation DisplayState()
    Display("Operational");
    //#]
}

Operational::Operational() {
}

Operational* Operational::get_instance() {
    return _instance;
}

void Operational::set_instance(Operational* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Operational.cpp
*********************************************************************/
