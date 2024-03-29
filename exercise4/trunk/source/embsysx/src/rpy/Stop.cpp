/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Stop
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Stop.cpp
*********************************************************************/

//## auto_generated
#include "Stop.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency ESXState
#include "ESXState.h"
//## package Discrete

//## class Stop
Stop::Stop() {
}

Stop::~Stop() {
}

void Stop::Execute(ESXState* s, EmbeddedSystemX* esx) {
    //#[ operation Execute(ESXState*,EmbeddedSystemX*)
    s->Stop(esx);
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Stop.cpp
*********************************************************************/
