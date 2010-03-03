/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: SelfTestFailed
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/SelfTestFailed.cpp
*********************************************************************/

//## auto_generated
#include "SelfTestFailed.h"
//## dependency ESXState
#include "ESXState.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## package Discrete

//## class SelfTestFailed
SelfTestFailed::SelfTestFailed() {
}

SelfTestFailed::~SelfTestFailed() {
}

void SelfTestFailed::Execute(ESXState* s, EmbeddedSystemX* esx) {
    //#[ operation Execute(ESXState*,EmbeddedSystemX*)
    s->SelfTestFailed(esx, 44);
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/SelfTestFailed.cpp
*********************************************************************/
