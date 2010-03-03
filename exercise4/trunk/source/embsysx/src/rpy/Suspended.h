/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Suspended
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Suspended.h
*********************************************************************/

#ifndef Suspended_H
#define Suspended_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## class Suspended
#include "Operational.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## dependency Mode1
class Mode1;

//## dependency Ready
class Ready;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## operation Instance()
class ESXState;

//## operation Resume(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

//## class Suspended
class Suspended : public Operational {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Suspended();
    
    //## auto_generated
    virtual ~Suspended();
    
    ////    Operations    ////
    
    //## operation Instance()
    static ESXState* Instance();
    
    //## operation Resume(EmbeddedSystemX*)
    virtual void Resume(EmbeddedSystemX* esx);
    
    //## operation Stop(EmbeddedSystemX*)
    virtual void Stop(EmbeddedSystemX* esx);
    
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
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Suspended.h
*********************************************************************/
