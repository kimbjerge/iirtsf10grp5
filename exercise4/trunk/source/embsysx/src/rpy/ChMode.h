/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: ChMode
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/ChMode.h
*********************************************************************/

#ifndef ChMode_H
#define ChMode_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## class ChMode
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

//## class ChMode
class ChMode : public Command {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ChMode();
    
    //## auto_generated
    virtual ~ChMode();
    
    ////    Operations    ////
    
    //## operation Execute(ESXState*,EmbeddedSystemX*)
    virtual void Execute(ESXState* s, EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/ChMode.h
*********************************************************************/
