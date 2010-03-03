/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode2
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Mode2.h
*********************************************************************/

#ifndef Mode2_H
#define Mode2_H

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
//## class Mode2
#include "RealTimeLoop.h"
//## link itsM2Strategy
#include "M2Strategy.h"
//## auto_generated
#include "Discrete.h"
//## dependency Mode3
class Mode3;

//## operation Instance()
class ESXState;

//## operation chMode(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Discrete

//## class Mode2
class Mode2 : public RealTimeLoop {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Mode2();
    
    //## auto_generated
    virtual ~Mode2();
    
    ////    Operations    ////
    
    //## operation Instance()
    static ESXState* Instance();
    
    //## operation chMode(EmbeddedSystemX*)
    virtual void chMode(EmbeddedSystemX* esx);
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    static ESXState* _instance;		//## attribute _instance
    
    //## operation DisplayState()
    virtual void DisplayState();

private :

    //## auto_generated
    static void set_instance(ESXState* p__instance);

public :

    //## operation eventX(EmbeddedSystemX*)
    virtual void eventX(EmbeddedSystemX* esx);
    
    //## operation eventY(EmbeddedSystemX*)
    virtual void eventY(EmbeddedSystemX* esx);
    
    //## auto_generated
    M2Strategy* getItsM2Strategy() const;

protected :

    M2Strategy itsM2Strategy;		//## link itsM2Strategy

private :

    //## auto_generated
    static ESXState* get_instance();
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Mode2.h
*********************************************************************/
