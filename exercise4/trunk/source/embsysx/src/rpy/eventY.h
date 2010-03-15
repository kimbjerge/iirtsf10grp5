/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: EventY
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/EventY.h
*********************************************************************/

#ifndef EventY_H
#define EventY_H

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
//## class EventY
#include "Event.h"
//## operation Execute(EventStrategy*)
class EventStrategy;

//## package Continuous

//## class EventY
class EventY : public Event {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EventY();
    
    //## auto_generated
    virtual ~EventY();
    
    ////    Operations    ////
    
    //## operation Execute(EventStrategy*)
    virtual void Execute(EventStrategy* es);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/EventY.h
*********************************************************************/
