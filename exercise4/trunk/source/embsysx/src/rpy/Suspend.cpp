/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Suspend
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Suspend.cpp
*********************************************************************/

//## auto_generated
#include "Suspend.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency ESXState
#include "ESXState.h"
//## package Discrete

//## class Suspend
Suspend::Suspend() {
}

Suspend::~Suspend() {
}

void Suspend::Execute(ESXState* s, EmbeddedSystemX* esx) {
    //#[ operation Execute(ESXState*,EmbeddedSystemX*)
    s->Suspend(esx);
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Suspend.cpp
*********************************************************************/