/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Ready
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Ready.h
*********************************************************************/

#ifndef Ready_H
#define Ready_H

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
//## class Ready
#include "Operational.h"
//## dependency Configuration
class Configuration;

//## operation Instance()
class ESXState;

//## operation Configure(EmbeddedSystemX*)
class EmbeddedSystemX;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency RealTimeLoop
class RealTimeLoop;

//## package Application::Discrete

//## class Ready
class Ready : public Operational {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Ready();
    
    //## auto_generated
    virtual ~Ready();
    
    ////    Operations    ////
    
    //## operation Configure(EmbeddedSystemX*)
    virtual void Configure(EmbeddedSystemX* esx);
    
    //## operation DisplayState()
    virtual void DisplayState();
    
    //## operation Instance()
    static ESXState* Instance();
    
    //## operation Start(EmbeddedSystemX*)
    virtual void Start(EmbeddedSystemX* esx);
    
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
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Ready.h
*********************************************************************/
