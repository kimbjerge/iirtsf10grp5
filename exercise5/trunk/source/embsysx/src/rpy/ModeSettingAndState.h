/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: ModeSettingAndState
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/ModeSettingAndState.h
*********************************************************************/

#ifndef ModeSettingAndState_H
#define ModeSettingAndState_H

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
//## dependency RealTimeLoop
#include "RealTimeLoop.h"
//## operation chMode(RealTimeLoop *,EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Application::Discrete

//## class ModeSettingAndState
class ModeSettingAndState {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ModeSettingAndState();
    
    //## auto_generated
    virtual ~ModeSettingAndState();
    
    ////    Operations    ////
    
    //## operation ChangeState(RealTimeLoop*,ModeSettingAndState*)
    void ChangeState(RealTimeLoop* rtl, ModeSettingAndState* state);
    
    //## operation chMode(RealTimeLoop *,EmbeddedSystemX*)
    virtual void chMode(RealTimeLoop * rtl, EmbeddedSystemX* esx);

protected :

    //## operation Display(char*)
    void Display(char* name);

public :

    //## operation DisplayState()
    virtual void DisplayState();

protected :

    //## operation defaultChange()
    void defaultChange();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/ModeSettingAndState.h
*********************************************************************/
