/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeLoop
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/

#ifndef RealTimeLoop_H
#define RealTimeLoop_H

//## auto_generated
#include <oxf/oxf.h>
//## class RealTimeLoop
#include "Operational.h"
//## dependency Mode1
class Mode1;

//## dependency Suspended
class Suspended;

//## operation Stop(EmbeddedSystemX*)
class EmbeddedSystemX;

//## operation Instance()
class ESXState;

//## package Default

//## class RealTimeLoop
class RealTimeLoop : public Operational {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RealTimeLoop();
    
    //## auto_generated
    virtual ~RealTimeLoop();
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    //## operation DisplayState()
    virtual void DisplayState();

public :

    //## operation Instance()
    static ESXState* Instance();
    
    //## operation Stop(EmbeddedSystemX*)
    virtual void Stop(EmbeddedSystemX* esx);
    
    //## operation Suspend(EmbeddedSystemX*)
    virtual void Suspend(EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/
