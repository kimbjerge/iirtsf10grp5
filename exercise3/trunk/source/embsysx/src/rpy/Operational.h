/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Operational
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Operational.h
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
//## class Operational
#include "ESXState.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
class Ready;

//## operation Restart(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

//## class Operational
class Operational : public ESXState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    virtual ~Operational();
    
    ////    Operations    ////
    
    //## operation Restart(EmbeddedSystemX*)
    virtual void Restart(EmbeddedSystemX* esx);
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    //## operation DisplayState()
    virtual void DisplayState();

public :

    //## auto_generated
    Operational();
    
    //## operation Instance()
    static ESXState* Instance();
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Operational.h
*********************************************************************/
