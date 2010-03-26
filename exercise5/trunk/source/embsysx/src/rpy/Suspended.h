/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Suspended
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Suspended.h
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
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Discrete.h"
//## class Suspended
#include "Operational.h"
//## operation Instance()
class ESXState;

//## operation Resume(EmbeddedSystemX*)
class EmbeddedSystemX;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
class Ready;

//## dependency RealTimeLoop
class RealTimeLoop;

//## package Application::Discrete

//## class Suspended
class Suspended : public Operational {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Suspended();
    
    //## auto_generated
    virtual ~Suspended();
    
    ////    Operations    ////
    
    //## operation DisplayState()
    virtual void DisplayState();
    
    //## operation Instance()
    static ESXState* Instance();
    
    //## operation Resume(EmbeddedSystemX*)
    virtual void Resume(EmbeddedSystemX* esx);
    
    //## operation Stop(EmbeddedSystemX*)
    virtual void Stop(EmbeddedSystemX* esx);
    
    ////    Additional operations    ////

private :

    //## auto_generated
    static ESXState* get_instance();
    
    //## auto_generated
    static void set_instance(ESXState* p__instance);
    
    ////    Attributes    ////

protected :

    static ESXState* _instance;		//## attribute _instance
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Suspended.h
*********************************************************************/
