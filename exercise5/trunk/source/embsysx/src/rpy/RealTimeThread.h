/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: RealTimeThread
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeThread.h
*********************************************************************/

#ifndef RealTimeThread_H
#define RealTimeThread_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
//#include "Continuous.h"
//## class RealTimeThread
#include "Thread.h"
//## attribute lock
#include "Mutex.h"
//## attribute lock
#include "MailBox.h"
//## dependency Event
class Event;

//## operation setStrategy(EventStrategy*)
class EventStrategy;

//## package Application::Continuous

//## class RealTimeThread
class RealTimeThread : public Thread {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    virtual ~RealTimeThread();
    
    ////    Operations    ////
    
    //## operation setStrategy(EventStrategy*)
    void setStrategy(EventStrategy* aStrategy);
    
    ////    Additional operations    ////
    
    //## auto_generated
    EventStrategy* getItsEventStrategy() const;
    
    //## auto_generated
    void setItsEventStrategy(EventStrategy* p_EventStrategy);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    EventStrategy* itsEventStrategy;		//## link itsEventStrategy

public :

    //## operation run()
    virtual void run();
    
    //## operation RealTimeThread()
    RealTimeThread();

    //## auto_generated
    Mailbox<Event*> * getMailBox() const;
    
private :

    //## auto_generated
    void setMailBox(Mailbox<Event*> * p_mailBox);

protected :

    Mailbox<Event*> * mailBox;		//## attribute mailBox

private :

    //## auto_generated
    Mutex* getLock() const;

protected :

    Mutex lock;		//## attribute lock
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeThread.h
*********************************************************************/
