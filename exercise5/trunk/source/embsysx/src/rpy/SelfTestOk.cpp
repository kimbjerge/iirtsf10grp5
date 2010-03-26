/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: SelfTestOk
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SelfTestOk.cpp
*********************************************************************/

//## auto_generated
#include "SelfTestOk.h"
//## dependency ESXState
#include "ESXState.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## package Application::Discrete

//## class SelfTestOk
SelfTestOk::SelfTestOk() {
}

SelfTestOk::~SelfTestOk() {
}

void SelfTestOk::Execute(ESXState* s, EmbeddedSystemX* esx) {
    //#[ operation Execute(ESXState*,EmbeddedSystemX*)
    s->SelftestOk(esx);
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SelfTestOk.cpp
*********************************************************************/
