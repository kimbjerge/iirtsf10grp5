/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: eventY
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/eventY.h
*********************************************************************/

#ifndef eventY_H
#define eventY_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## class eventY
#include "Command.h"
//## dependency ESXState
class ESXState;

//## operation Execute(ESXState*,EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

//## class eventY
class eventY : public Command {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    eventY();
    
    //## auto_generated
    virtual ~eventY();
    
    ////    Operations    ////
    
    //## operation Execute(ESXState*,EmbeddedSystemX*)
    virtual void Execute(ESXState* s, EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/eventY.h
*********************************************************************/
