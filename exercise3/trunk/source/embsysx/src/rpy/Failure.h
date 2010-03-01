/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Failure
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Failure.h
*********************************************************************/

#ifndef Failure_H
#define Failure_H

//## auto_generated
#include <oxf/oxf.h>
//## class Failure
#include "ESXState.h"
//## auto_generated
#include "Default.h"
//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## operation Exit(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

//## class Failure
class Failure : public ESXState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Failure();
    
    //## auto_generated
    virtual ~Failure();
    
    ////    Operations    ////
    
    //## operation Exit(EmbeddedSystemX*)
    virtual void Exit(EmbeddedSystemX* esx);
    
    //## operation Instance()
    static ESXState* Instance();
    
    //## operation Restart(EmbeddedSystemX*)
    virtual void Restart(EmbeddedSystemX* esx);
    
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
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Failure.h
*********************************************************************/
