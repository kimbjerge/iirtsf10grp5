/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode2
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Mode2.h
*********************************************************************/

#ifndef Mode2_H
#define Mode2_H

//## auto_generated
#include <oxf/oxf.h>
//## class Mode2
#include "RealTimeLoop.h"
//## operation Instance()
class ESXState;

//## operation chMode(EmbeddedSystemX*)
class EmbeddedSystemX;

//## dependency Mode3
class Mode3;

//## package Default

//## class Mode2
class Mode2 : public RealTimeLoop {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Mode2();
    
    //## auto_generated
    virtual ~Mode2();
    
    ////    Operations    ////
    
    //## operation Instance()
    static ESXState* Instance();
    
    //## operation chMode(EmbeddedSystemX*)
    virtual void chMode(EmbeddedSystemX* esx);
    
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
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Mode2.h
*********************************************************************/
