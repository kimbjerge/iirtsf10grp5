/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: SelfTestOk
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/SelfTestOk.cpp
*********************************************************************/

//## auto_generated
#include "SelfTestOk.h"
//## dependency ESXState
#include "ESXState.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## package Default

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
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/SelfTestOk.cpp
*********************************************************************/
