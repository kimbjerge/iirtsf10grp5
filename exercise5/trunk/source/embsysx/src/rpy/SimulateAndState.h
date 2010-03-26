/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: SimulateAndState
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SimulateAndState.h
*********************************************************************/

#ifndef SimulateAndState_H
#define SimulateAndState_H

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
//## operation RunRealTime(RealTimeLoop*,EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Application::Discrete

//## class SimulateAndState
class SimulateAndState {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SimulateAndState();
    
    //## auto_generated
    virtual ~SimulateAndState();
    
    ////    Operations    ////
    
    //## operation RunRealTime(RealTimeLoop*,EmbeddedSystemX*)
    virtual void RunRealTime(RealTimeLoop* rtl, EmbeddedSystemX* esx);
    
    //## operation Simulate(RealTimeLoop*,EmbeddedSystemX*)
    virtual void Simulate(RealTimeLoop* rtl, EmbeddedSystemX* esx);

protected :

    //## operation ChangeState(RealTimeLoop*,SimulateAndState*)
    void ChangeState(RealTimeLoop* rtl, SimulateAndState* state);
    
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
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SimulateAndState.h
*********************************************************************/
