/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode3
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Mode3.h
*********************************************************************/

#ifndef Mode3_H
#define Mode3_H

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
//## class Mode3
#include "RealTimeLoop.h"
//## link itsM3Strategy
#include "M3Strategy.h"
//## auto_generated
#include "Discrete.h"
//## dependency Mode1
class Mode1;

//## operation Instance(EmbeddedSystemX*)
class ESXState;

//## operation Instance(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Discrete

//## class Mode3
class Mode3 : public RealTimeLoop {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Mode3();
    
    //## auto_generated
    virtual ~Mode3();
    
    ////    Operations    ////
    
    //## operation Instance(EmbeddedSystemX*)
    static ESXState* Instance(EmbeddedSystemX* esx);
    
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

    //## auto_generated
    M3Strategy* getItsM3Strategy() const;

protected :

    M3Strategy itsM3Strategy;		//## link itsM3Strategy

private :

    //## auto_generated
    static ESXState* get_instance();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Mode3.h
*********************************************************************/
