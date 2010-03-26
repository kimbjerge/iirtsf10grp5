/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: M2Strategy
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/M2Strategy.h
*********************************************************************/

#ifndef M2Strategy_H
#define M2Strategy_H

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
//## class M2Strategy
#include "EventStrategy.h"
//## auto_generated
#include "Continuous.h"
//## package Application::Continuous

//## class M2Strategy
class M2Strategy : public EventStrategy {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    M2Strategy();
    
    //## auto_generated
    virtual ~M2Strategy();
    
    ////    Operations    ////
    
    //## operation ResponseX()
    virtual void ResponseX();
    
    //## operation ResponseY()
    virtual void ResponseY();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/M2Strategy.h
*********************************************************************/
