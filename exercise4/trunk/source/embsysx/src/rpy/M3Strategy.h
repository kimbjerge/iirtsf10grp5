/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: M3Strategy
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/M3Strategy.h
*********************************************************************/

#ifndef M3Strategy_H
#define M3Strategy_H

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
//## class M3Strategy
#include "EventStrategy.h"
//## auto_generated
#include "Continuous.h"
//## package Continuous

//## class M3Strategy
class M3Strategy : public EventStrategy {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    M3Strategy();
    
    //## auto_generated
    virtual ~M3Strategy();
    
    ////    Operations    ////
    
    //## operation ResponseX()
    virtual void ResponseX();
    
    //## operation ResponseY()
    virtual void ResponseY();
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/M3Strategy.h
*********************************************************************/
