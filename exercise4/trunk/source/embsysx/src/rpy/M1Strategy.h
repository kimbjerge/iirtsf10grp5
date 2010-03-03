/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: M1Strategy
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/M1Strategy.h
*********************************************************************/

#ifndef M1Strategy_H
#define M1Strategy_H

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
//## class M1Strategy
#include "EventStrategy.h"
//## auto_generated
#include "Continuous.h"
//## package Continuous

//## class M1Strategy
class M1Strategy : public EventStrategy {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    M1Strategy();
    
    //## auto_generated
    virtual ~M1Strategy();
    
    ////    Operations    ////
    
    //## operation ResponseX()
    virtual void ResponseX();
    
    //## operation ResponseY()
    virtual void ResponseY();
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/M1Strategy.h
*********************************************************************/
