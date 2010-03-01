/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: PowerOnSelfTest
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/PowerOnSelfTest.h
*********************************************************************/

#ifndef PowerOnSelfTest_H
#define PowerOnSelfTest_H

//## auto_generated
#include <oxf/oxf.h>
//## class PowerOnSelfTest
#include "ESXState.h"
//## auto_generated
#include "Default.h"
//## dependency Failure
class Failure;

//## dependency Initializing
class Initializing;

//## operation SelfTestFailed(EmbeddedSystemX*,int)
class EmbeddedSystemX;

//## package Default

//## class PowerOnSelfTest
class PowerOnSelfTest : public ESXState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    PowerOnSelfTest();
    
    //## auto_generated
    virtual ~PowerOnSelfTest();
    
    ////    Operations    ////
    
    //## operation Instance()
    static ESXState* Instance();
    
    //## operation SelfTestFailed(EmbeddedSystemX*,int)
    virtual void SelfTestFailed(EmbeddedSystemX* esx, int ErrorNo);
    
    //## operation SelftestOk(EmbeddedSystemX*)
    virtual void SelftestOk(EmbeddedSystemX* esx);
    
    ////    Additional operations    ////

private :

    //## auto_generated
    static void set_instance(ESXState* p__instance);
    
    ////    Attributes    ////

protected :

    static ESXState* _instance;		//## attribute _instance
    
    //## operation DisplayState()
    virtual void DisplayState();

private :

    //## auto_generated
    static ESXState* get_instance();
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/PowerOnSelfTest.h
*********************************************************************/
