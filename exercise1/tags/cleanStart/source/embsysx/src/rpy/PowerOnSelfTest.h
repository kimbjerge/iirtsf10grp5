/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: PowerOnSelfTest
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/PowerOnSelfTest.h
*********************************************************************/

#ifndef PowerOnSelfTest_H
#define PowerOnSelfTest_H

//## auto_generated
#include <oxf/oxf.h>
//## class PowerOnSelfTest
#include "ESXState.h"
//## dependency Failure
#include "Failure.h"
//## dependency Initializing
#include "Initializing.h"
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
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/PowerOnSelfTest.h
*********************************************************************/
