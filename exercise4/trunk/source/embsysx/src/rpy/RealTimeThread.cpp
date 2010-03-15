/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeThread
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/RealTimeThread.cpp
*********************************************************************/

//## auto_generated
#include "RealTimeThread.h"
//## operation setStrategy(EventStrategy*)
#include "EventStrategy.h"
//## dependency Event
#include "Event.h"
//## package Continuous

//## class RealTimeThread
RealTimeThread::RealTimeThread() {
    itsEventStrategy = NULL;
}

RealTimeThread::~RealTimeThread() {
    cleanUpRelations();
}

void RealTimeThread::setStrategy(EventStrategy* aStrategy) {
    //#[ operation setStrategy(EventStrategy*)
    itsEventStrategy = aStrategy;
    //#]
}

EventStrategy* RealTimeThread::getItsEventStrategy() const {
    return itsEventStrategy;
}

void RealTimeThread::setItsEventStrategy(EventStrategy* p_EventStrategy) {
    itsEventStrategy = p_EventStrategy;
}

void RealTimeThread::cleanUpRelations() {
    if(itsEventStrategy != NULL)
        {
            itsEventStrategy = NULL;
        }
}

void RealTimeThread::run() {
    //#[ operation run()
    //#]
}

void * RealTimeThread::getMailbox() {
    //#[ operation getMailbox()
    //#]
}

void RealTimeThread::start() {
    //#[ operation start()
    std::cout << "RealTimeThread start" << std::endl;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/RealTimeThread.cpp
*********************************************************************/
