/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode1
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Mode1.h
*********************************************************************/

#ifndef Mode1_H
#define Mode1_H

//## auto_generated
#include <oxf/oxf.h>
//## class Mode1
#include "RealTimeLoop.h"
//## auto_generated
#include "Default.h"
//## operation Instance()
class ESXState;

//## operation chMode(EmbeddedSystemX*)
class EmbeddedSystemX;

//## dependency Mode2
class Mode2;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
class Ready;

//## dependency Suspended
class Suspended;

//## package Default

//## class Mode1
class Mode1 : public RealTimeLoop {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Mode1();
    
    //## auto_generated
    virtual ~Mode1();
    
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
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Mode1.h
*********************************************************************/
