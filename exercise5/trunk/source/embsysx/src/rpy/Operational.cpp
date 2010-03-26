/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Operational
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Operational.cpp
*********************************************************************/

//## auto_generated
#include "Operational.h"
//## operation Restart(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency Ready
#include "Ready.h"
//## package Application::Discrete

//## class Operational
Operational::Operational() {
}

Operational::~Operational() {
}

void Operational::DisplayState() {
    //#[ operation DisplayState()
    Display("Operational");
    //#]
}

ESXState* Operational::Instance() {
    //#[ operation Instance()
    return Ready::Instance(); 
    //#]
}

void Operational::Restart(EmbeddedSystemX* esx) {
    //#[ operation Restart(EmbeddedSystemX*)
    ChangeState(esx, PowerOnSelfTest::Instance());
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Operational.cpp
*********************************************************************/
