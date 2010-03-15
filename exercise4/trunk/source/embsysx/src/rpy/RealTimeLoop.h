/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeLoop
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/

#ifndef RealTimeLoop_H
#define RealTimeLoop_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## class RealTimeLoop
#include "Operational.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Discrete.h"
//## dependency Mode1
class Mode1;

//## dependency Suspended
class Suspended;

//## operation Instance(EmbeddedSystemX*)
class EmbeddedSystemX;

//## operation Instance(EmbeddedSystemX*)
class ESXState;

//## package Discrete

//## class RealTimeLoop
class RealTimeLoop : public Operational {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RealTimeLoop();
    
    //## auto_generated
    virtual ~RealTimeLoop();
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    //## operation DisplayState()
    virtual void DisplayState();

public :

    //## operation Instance(EmbeddedSystemX*)
    static ESXState* Instance(EmbeddedSystemX* esx);
    
    //## operation Stop(EmbeddedSystemX*)
    virtual void Stop(EmbeddedSystemX* esx);
    
    //## operation Suspend(EmbeddedSystemX*)
    virtual void Suspend(EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/
