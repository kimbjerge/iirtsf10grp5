/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeLoop
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/

//## auto_generated
#include "RealTimeLoop.h"
//## operation Instance()
#include "ESXState.h"
//## operation Stop(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency Mode1
#include "Mode1.h"
//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
#include "Ready.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency Suspended
#include "Suspended.h"
//## dependency Ready
class Ready;

//## package Default

//## class RealTimeLoop
RealTimeLoop::RealTimeLoop() {
}

RealTimeLoop::~RealTimeLoop() {
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

void RealTimeLoop::Stop(EmbeddedSystemX* esx) {
    //#[ operation Stop(EmbeddedSystemX*)
    ChangeState(esx, Ready::Instance());
    //#]
}

void RealTimeLoop::Suspend(EmbeddedSystemX* esx) {
    //#[ operation Suspend(EmbeddedSystemX*)
    ChangeState(esx, Suspended::Instance());
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/
