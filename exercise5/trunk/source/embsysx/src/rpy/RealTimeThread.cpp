/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: RealTimeThread
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeThread.cpp
*********************************************************************/

//## auto_generated
#include "RealTimeThread.h"
//## operation setStrategy(EventStrategy*)
#include "EventStrategy.h"
//## dependency Event
#include "Event.h"
//## package Application::Continuous

//## class RealTimeThread
RealTimeThread::~RealTimeThread() {
    cleanUpRelations();
}

void RealTimeThread::setStrategy(EventStrategy* aStrategy) {
    //#[ operation setStrategy(EventStrategy*)
    lock.wait();
    itsEventStrategy = aStrategy;
    lock.signal();
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
    while(isAlive()){
    #ifdef _LINUX
    	Event *tmpEvent = mailBox->get();
    	lock.wait();
    	tmpEvent->Execute(itsEventStrategy);
    	lock.signal();
    	delete tmpEvent;
    #endif
    }
    
    //#]
}

RealTimeThread::RealTimeThread() : Thread(PRIORITY_NORMAL,"RealTimeThread") {
    itsEventStrategy = NULL;
    //#[ operation RealTimeThread()
    #ifdef _LINUX
        mailBox = new Mailbox<Event*>(100,true);
    #endif
    //#]
}

Mailbox<Event*> * RealTimeThread::getMailBox() const {
    return mailBox;
}

void RealTimeThread::setMailBox(Mailbox<Event*> * p_mailBox) {
    mailBox = p_mailBox;
}

Mutex* RealTimeThread::getLock() const {
    return (Mutex*) &lock;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeThread.cpp
*********************************************************************/
