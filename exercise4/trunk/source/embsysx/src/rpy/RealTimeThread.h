/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeThread
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/RealTimeThread.h
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
//## operation setStrategy(EventStrategy*)
class EventStrategy;

//## package Continuous

//## class RealTimeThread
class RealTimeThread {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RealTimeThread();
    
    //## auto_generated
    ~RealTimeThread();
    
    ////    Operations    ////
    
    //## operation responseEventX()
    void responseEventX();
    
    //## operation responseEventY()
    void responseEventY();
    
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
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/RealTimeThread.h
*********************************************************************/
