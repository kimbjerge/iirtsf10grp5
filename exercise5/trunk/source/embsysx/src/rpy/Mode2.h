/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Mode2
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Mode2.h
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
//## operation chMode(RealTimeLoop*,EmbeddedSystemX*)
class RealTimeLoop;

//## link itsM2Strategy
#include "M2Strategy.h"
//## auto_generated
#include "Discrete.h"
//## class Mode2
#include "ModeSettingAndState.h"
//## dependency Mode3
class Mode3;

//## operation Instance(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Application::Discrete

//## class Mode2
class Mode2 : public ModeSettingAndState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Mode2();
    
    //## auto_generated
    virtual ~Mode2();
    
    ////    Operations    ////
    
    //## operation Instance(EmbeddedSystemX*)
    static ModeSettingAndState* Instance(EmbeddedSystemX* esx);
    
    //## operation chMode(RealTimeLoop*,EmbeddedSystemX*)
    virtual void chMode(RealTimeLoop* rtl, EmbeddedSystemX* esx);
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    static ModeSettingAndState* _instance;		//## attribute _instance

public :

    //## operation DisplayState()
    virtual void DisplayState();
    
    //## auto_generated
    M2Strategy* getItsM2Strategy() const;

protected :

    M2Strategy itsM2Strategy;		//## link itsM2Strategy

private :

    //## auto_generated
    static ModeSettingAndState* get_instance();
    
    //## auto_generated
    static void set_instance(ModeSettingAndState* p__instance);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Mode2.h
*********************************************************************/
