/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeThread
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/RealTimeThread.cpp
*********************************************************************/

//## auto_generated
#include "RealTimeThread.h"
//## operation setStrategy(EventStrategy*)
#include "EventStrategy.h"
//## package Continuous

//## class RealTimeThread
RealTimeThread::RealTimeThread() {
    itsEventStrategy = NULL;
}

RealTimeThread::~RealTimeThread() {
    cleanUpRelations();
}

void RealTimeThread::responseEventX() {
    //#[ operation responseEventX()
    itsEventStrategy->ResponseX();
    //#]
}

void RealTimeThread::responseEventY() {
    //#[ operation responseEventY()
    itsEventStrategy->ResponseY();
    //#]
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

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/RealTimeThread.cpp
*********************************************************************/
