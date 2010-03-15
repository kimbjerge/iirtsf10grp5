/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: EmbeddedSystemX
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/EmbeddedSystemX.cpp
*********************************************************************/

//## auto_generated
#include "EmbeddedSystemX.h"
//## operation ChangeState(ESXState*)
#include "ESXState.h"
//## operation setStrategy(EventStrategy*)
#include "EventStrategy.h"
//## link itsRealTimeThread
#include "RealTimeThread.h"
//## dependency Command
#include "Command.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## package Discrete

//## class EmbeddedSystemX
EmbeddedSystemX::~EmbeddedSystemX() {
    cleanUpRelations();
}

void EmbeddedSystemX::ChangeState(ESXState* s) {
    //#[ operation ChangeState(ESXState*)
    itsESXState = s;
    //#]
}

ESXState* EmbeddedSystemX::getItsESXState() const {
    return itsESXState;
}

void EmbeddedSystemX::setItsESXState(ESXState* p_ESXState) {
    itsESXState = p_ESXState;
}

void EmbeddedSystemX::cleanUpRelations() {
    if(itsESXState != NULL)
        {
            itsESXState = NULL;
        }
    if(itsRealTimeThread != NULL)
        {
            itsRealTimeThread = NULL;
        }
}

EmbeddedSystemX::EmbeddedSystemX() {
    itsESXState = NULL;
    itsRealTimeThread = NULL;
    //#[ operation EmbeddedSystemX()
    itsESXState = PowerOnSelfTest::Instance(); 
    itsRealTimeThread = new RealTimeThread();
    //#]
}

void EmbeddedSystemX::HandleCommand(Command* pCommand) {
    //#[ operation HandleCommand(Command*)
    pCommand->Execute(itsESXState, this);
    //#]
}

void EmbeddedSystemX::setStrategy(EventStrategy* aStrategy) {
    //#[ operation setStrategy(EventStrategy*)
    itsRealTimeThread->setStrategy(aStrategy);
    //#]
}

RealTimeThread* EmbeddedSystemX::getItsRealTimeThread() const {
    return itsRealTimeThread;
}

void EmbeddedSystemX::setItsRealTimeThread(RealTimeThread* p_RealTimeThread) {
    itsRealTimeThread = p_RealTimeThread;
}

void EmbeddedSystemX::start() {
    //#[ operation start()
    itsRealTimeThread->start();
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/EmbeddedSystemX.cpp
*********************************************************************/
