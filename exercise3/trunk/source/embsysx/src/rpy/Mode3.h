/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode3
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Mode3.h
*********************************************************************/

#ifndef Mode3_H
#define Mode3_H

//## auto_generated
#include <oxf/oxf.h>
//## class Mode3
#include "RealTimeLoop.h"
//## operation Instance()
class ESXState;

//## operation chMode(EmbeddedSystemX*)
class EmbeddedSystemX;

//## dependency Mode1
class Mode1;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
class Ready;

//## package Default

//## class Mode3
class Mode3 : public RealTimeLoop {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Mode3();
    
    //## auto_generated
    virtual ~Mode3();
    
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
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Mode3.h
*********************************************************************/
