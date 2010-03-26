/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: SelfTestFailed
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SelfTestFailed.cpp
*********************************************************************/

//## auto_generated
#include "SelfTestFailed.h"
//## dependency ESXState
#include "ESXState.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## package Application::Discrete

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
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SelfTestFailed.cpp
*********************************************************************/
