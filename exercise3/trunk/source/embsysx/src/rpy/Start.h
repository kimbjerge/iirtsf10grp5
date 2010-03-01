/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Start
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Start.h
*********************************************************************/

#ifndef Start_H
#define Start_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## class Start
#include "Command.h"
//## dependency ESXState
class ESXState;

//## operation Execute(ESXState*,EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

//## class Start
class Start : public Command {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Start();
    
    //## auto_generated
    virtual ~Start();
    
    ////    Operations    ////
    
    //## operation Execute(ESXState*,EmbeddedSystemX*)
    virtual void Execute(ESXState* s, EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Start.h
*********************************************************************/
