/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeLoop
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/

#ifndef RealTimeLoop_H
#define RealTimeLoop_H

//## auto_generated
#include <oxf/oxf.h>
//## class RealTimeLoop
#include "Operational.h"
//## dependency Mode1
class Mode1;

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
    
    virtual void Suspend(EmbeddedSystemX*);

    ////    Operations    ////
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    //## operation DisplayState()
    virtual void DisplayState();

public :

    //## operation Instance()
    static ESXState* Instance();
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/
