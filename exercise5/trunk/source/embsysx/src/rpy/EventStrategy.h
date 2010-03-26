/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: EventStrategy
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/EventStrategy.h
*********************************************************************/

#ifndef EventStrategy_H
#define EventStrategy_H

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
//## package Application::Continuous

//## class EventStrategy
class EventStrategy {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EventStrategy();
    
    //## auto_generated
    virtual ~EventStrategy();
    
    ////    Operations    ////
    
    //## operation ResponseX()
    virtual void ResponseX() = 0;
    
    //## operation ResponseY()
    virtual void ResponseY() = 0;

protected :

    //## operation Display(char*)
    void Display(char* name);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/EventStrategy.h
*********************************************************************/
