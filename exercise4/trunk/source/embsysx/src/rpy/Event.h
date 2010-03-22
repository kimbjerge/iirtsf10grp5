/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Event
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Event.h
*********************************************************************/

#ifndef Event_H
#define Event_H

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
//## operation Execute(EventStrategy*)
class EventStrategy;

//## package Continuous

//## class Event
class Event {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Event();
    
    //## auto_generated
    virtual ~Event() = 0;
    
    ////    Operations    ////
    
    //## operation Execute(EventStrategy*)
    virtual void Execute(EventStrategy* es) = 0;
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Event.h
*********************************************************************/
