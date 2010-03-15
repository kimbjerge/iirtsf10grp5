/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: EventX
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/EventX.h
*********************************************************************/

#ifndef EventX_H
#define EventX_H

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
//## class EventX
#include "Event.h"
//## operation Execute(EventStrategy*)
class EventStrategy;

//## package Continuous

//## class EventX
class EventX : public Event {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EventX();
    
    //## auto_generated
    virtual ~EventX();
    
    ////    Operations    ////
    
    //## operation Execute(EventStrategy*)
    virtual void Execute(EventStrategy* es);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/EventX.h
*********************************************************************/
