/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeLoop
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/

//## auto_generated
#include "RealTimeLoop.h"
//## operation Instance()
#include "ESXState.h"
//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
#include "Ready.h"
//## dependency Mode1
#include "Mode1.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"

#include "Suspended.h"
//## dependency Ready
class Ready;

//## package Default

//## class RealTimeLoop
RealTimeLoop::RealTimeLoop() {
}

RealTimeLoop::~RealTimeLoop() {
}

void RealTimeLoop::Suspend(EmbeddedSystemX* esx){
	ChangeState(esx,Suspended::Instance());
}

void RealTimeLoop::DisplayState() {
    //#[ operation DisplayState()
    Display("RealTimeLoop");
    //#]
}

ESXState* RealTimeLoop::Instance() {
    //#[ operation Instance()
    return Mode1::Instance();
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/
