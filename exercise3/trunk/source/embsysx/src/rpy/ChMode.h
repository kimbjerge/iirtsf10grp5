/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: ChMode
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/ChMode.h
*********************************************************************/

#ifndef ChMode_H
#define ChMode_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## class ChMode
#include "Command.h"
//## dependency ESXState
class ESXState;

//## operation Execute(ESXState*,EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

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
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/ChMode.h
*********************************************************************/
