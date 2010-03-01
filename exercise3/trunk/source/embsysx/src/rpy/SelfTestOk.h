/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: SelfTestOk
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/SelfTestOk.h
*********************************************************************/

#ifndef SelfTestOk_H
#define SelfTestOk_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## class SelfTestOk
#include "Command.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## operation Execute(ESXState*,EmbeddedSystemX*)
class EmbeddedSystemX;

//## dependency ESXState
class ESXState;

//## package Default

//## class SelfTestOk
class SelfTestOk : public Command {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SelfTestOk();
    
    //## auto_generated
    virtual ~SelfTestOk();
    
    ////    Operations    ////
    
    //## operation Execute(ESXState*,EmbeddedSystemX*)
    virtual void Execute(ESXState* s, EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/SelfTestOk.h
*********************************************************************/
