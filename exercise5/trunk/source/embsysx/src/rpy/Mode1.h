/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Mode1
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Mode1.h
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
//## auto_generated
#include "Discrete.h"
//## link itsM1Strategy
#include "M1Strategy.h"
//## class Mode1
#include "ModeSettingAndState.h"
//## operation Instance(EmbeddedSystemX* )
class EmbeddedSystemX;

//## dependency Mode2
class Mode2;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## operation chMode(RealTimeLoop*,EmbeddedSystemX*)
class RealTimeLoop;

//## package Application::Discrete

//## class Mode1
class Mode1 : public ModeSettingAndState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Mode1();
    
    //## auto_generated
    virtual ~Mode1();
    
    ////    Operations    ////
    
    //## operation DisplayState()
    virtual void DisplayState();
    
    //## operation Instance(EmbeddedSystemX* )
    static ModeSettingAndState* Instance(EmbeddedSystemX* esx);
    
    //## operation chMode(RealTimeLoop*,EmbeddedSystemX*)
    virtual void chMode(RealTimeLoop* rtl, EmbeddedSystemX* esx);
    
    ////    Additional operations    ////
    
    //## auto_generated
    M1Strategy* getItsM1Strategy() const;

private :

    //## auto_generated
    static ModeSettingAndState* get_instance();
    
    //## auto_generated
    static void set_instance(ModeSettingAndState* p__instance);
    
    ////    Attributes    ////

protected :

    static ModeSettingAndState* _instance;		//## attribute _instance
    
    ////    Relations and components    ////
    
    M1Strategy itsM1Strategy;		//## link itsM1Strategy
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Mode1.h
*********************************************************************/
