//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## class PowerOnSelfTest
#include "ESXState.h"
//## auto_generated
#include "Discrete.h"
//## dependency Failure
class Failure;

//## dependency Initializing
class Initializing;

//## operation SelfTestFailed(EmbeddedSystemX*,int)
class EmbeddedSystemX;

//## package Application::Discrete

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

public :

    //## operation DisplayState()
    virtual void DisplayState();

private :

    //## auto_generated
    static ESXState* get_instance();

protected :

    static ESXState* _instance;		//## attribute _instance
};

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/PowerOnSelfTest.h
*********************************************************************/
