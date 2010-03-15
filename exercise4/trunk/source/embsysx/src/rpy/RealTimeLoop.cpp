/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeLoop
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/

//## auto_generated
#include "RealTimeLoop.h"
//## operation Instance(EmbeddedSystemX*)
#include "ESXState.h"
//## operation Instance(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency Mode1
#include "Mode1.h"
//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
#include "Ready.h"
//## dependency Suspended
#include "Suspended.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency Ready
class Ready;

//## package Discrete

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

ESXState* RealTimeLoop::Instance(EmbeddedSystemX* esx) {
    //#[ operation Instance(EmbeddedSystemX*)
    return Mode1::Instance(esx);
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
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/
