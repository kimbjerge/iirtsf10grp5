/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Configure
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Configure.h
*********************************************************************/

#ifndef Configure_H
#define Configure_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## class Configure
#include "Command.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Discrete.h"
//## dependency ESXState
class ESXState;

//## operation Execute(ESXState*,EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Discrete

//## class Configure
class Configure : public Command {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Configure();
    
    //## auto_generated
    virtual ~Configure();
    
    ////    Operations    ////
    
    //## operation Execute(ESXState*,EmbeddedSystemX*)
    virtual void Execute(ESXState* s, EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Configure.h
*********************************************************************/
