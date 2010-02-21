/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Suspend
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Suspend.h
*********************************************************************/

#ifndef Suspend_H
#define Suspend_H

//## auto_generated
#include <oxf/oxf.h>
//## class Suspend
#include "Command.h"
//## dependency ESXState
class ESXState;

//## operation Execute(ESXState*,EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

//## class Suspend
class Suspend : public Command {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Suspend();
    
    //## auto_generated
    virtual ~Suspend();
    
    ////    Operations    ////
    
    //## operation Execute(ESXState*,EmbeddedSystemX*)
    virtual void Execute(ESXState* s, EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Suspend.h
*********************************************************************/
