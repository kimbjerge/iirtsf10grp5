/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeLoop
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/

#ifndef RealTimeLoop_H
#define RealTimeLoop_H

//## auto_generated
#include <oxf/oxf.h>
//## class RealTimeLoop
#include "Operational.h"
//## attribute _instance
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

    static ESXState* _instance;		//## attribute _instance
    
    //## operation DisplayState()
    virtual void DisplayState();

private :

    //## auto_generated
    static void set_instance(ESXState* p__instance);
    
    //## auto_generated
    static ESXState* get_instance();
};

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/
