/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Operational
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Operational.cpp
*********************************************************************/

//## auto_generated
#include "Operational.h"
//## operation Restart(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency Ready
#include "Ready.h"
//## package Default

//## class Operational
Operational::~Operational() {
}

void Operational::Restart(EmbeddedSystemX* esx) {
    //#[ operation Restart(EmbeddedSystemX*)
    ChangeState(esx, PowerOnSelfTest::Instance());
    //#]
}

void Operational::DisplayState() {
    //#[ operation DisplayState()
    Display("Operational");
    //#]
}

Operational::Operational() {
}

ESXState* Operational::Instance() {
    //#[ operation Instance()
    return Ready::Instance();
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Operational.cpp
*********************************************************************/
