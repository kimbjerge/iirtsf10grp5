/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeThread
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/RealTimeThread.h
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
#include "Continuous.h"
//## dependency Event

#include "../os/posix/Thread.h"
#include "../os/posix/Mailbox.h"
class Event;

//## operation setStrategy(EventStrategy*)
class EventStrategy;

//## package Continuous

//## class RealTimeThread
class RealTimeThread : public Thread {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RealTimeThread();
    
    //## auto_generated
    ~RealTimeThread();
    
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
    void run();
    
    //## operation getMailbox()
    void * getMailbox();
private :
    Mailbox<Event>* mailBox;
    
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/RealTimeThread.h
*********************************************************************/
