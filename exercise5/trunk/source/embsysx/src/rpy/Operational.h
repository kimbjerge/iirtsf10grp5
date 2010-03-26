/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Operational
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Operational.h
*********************************************************************/

#ifndef Operational_H
#define Operational_H

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
//## class Operational
#include "ESXState.h"
//## operation Restart(EmbeddedSystemX*)
class EmbeddedSystemX;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
class Ready;

//## package Application::Discrete

//## class Operational
class Operational : public ESXState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Operational();
    
    //## auto_generated
    virtual ~Operational();
    
    ////    Operations    ////
    
    //## operation DisplayState()
    virtual void DisplayState();
    
    //## operation Instance()
    static ESXState* Instance();
    
    //## operation Restart(EmbeddedSystemX*)
    virtual void Restart(EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Operational.h
*********************************************************************/
