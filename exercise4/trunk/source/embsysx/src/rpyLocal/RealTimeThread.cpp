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
RealTimeThread::RealTimeThread() : Thread(PRIORITY_NORMAL,"RealTimeThread") {
    itsEventStrategy = NULL;
    mailBox = new Mailbox<Event *>(100,true);
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

	while(true){
		Event* tmpEvent = mailBox->get();
		tmpEvent->Execute(itsEventStrategy);
	    delete tmpEvent;
	}

}

//void* RealTimeThread::getMailbox() const {
//Mailbox<Event*>* RealTimeThread::getMailbox() const {
void* RealTimeThread::getMailbox() const {

	return mailBox;

}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/RealTimeThread.cpp
*********************************************************************/
