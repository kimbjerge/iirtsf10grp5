/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode1
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Mode1.h
*********************************************************************/

#ifndef Mode1_H
#define Mode1_H

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
//## class Mode1
#include "RealTimeLoop.h"
//## link itsM1Strategy
#include "M1Strategy.h"
//## auto_generated
#include "Discrete.h"
//## dependency Mode2
class Mode2;

//## operation Instance()
class ESXState;

//## operation chMode(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Discrete

//## class Mode1
class Mode1 : public RealTimeLoop {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Mode1();
    
    //## auto_generated
    virtual ~Mode1();
    
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
    
    //## auto_generated
    M1Strategy* getItsM1Strategy() const;

protected :

    M1Strategy itsM1Strategy;		//## link itsM1Strategy

private :

    //## auto_generated
    static ESXState* get_instance();
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Mode1.h
*********************************************************************/
