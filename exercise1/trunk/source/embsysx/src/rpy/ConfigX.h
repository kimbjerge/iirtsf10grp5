/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: ConfigX
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/ConfigX.h
*********************************************************************/

#ifndef ConfigX_H
#define ConfigX_H

//## auto_generated
#include <oxf/oxf.h>
//## class ConfigX
#include "Command.h"
//## dependency ESXState
class ESXState;

//## operation Execute(ESXState*,EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

//## class ConfigX
class ConfigX : public Command {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ConfigX();
    
    //## auto_generated
    virtual ~ConfigX();
    
    ////    Operations    ////
    
    //## operation Execute(ESXState*,EmbeddedSystemX*)
    virtual void Execute(ESXState* s, EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/ConfigX.h
*********************************************************************/
