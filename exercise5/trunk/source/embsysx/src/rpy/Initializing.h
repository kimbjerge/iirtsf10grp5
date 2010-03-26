/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Initializing
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Initializing.h
*********************************************************************/

#ifndef Initializing_H
#define Initializing_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## class Initializing
#include "ESXState.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Discrete.h"
//## dependency Operational
class Operational;

//## operation Initialized(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Application::Discrete

//## class Initializing
class Initializing : public ESXState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Initializing();
    
    //## auto_generated
    virtual ~Initializing();
    
    ////    Operations    ////
    
    //## operation Initialized(EmbeddedSystemX*)
    virtual void Initialized(EmbeddedSystemX* esx);
    
    //## operation Instance()
    static ESXState* Instance();
    
    ////    Additional operations    ////

private :

    //## auto_generated
    static void set_instance(ESXState* p__instance);
    
    ////    Attributes    ////

protected :

    static ESXState* _instance;		//## attribute _instance

public :

    //## operation DisplayState()
    virtual void DisplayState();

private :

    //## auto_generated
    static ESXState* get_instance();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Initializing.h
*********************************************************************/
