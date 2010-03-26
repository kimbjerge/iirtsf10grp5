/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: ESXState
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/ESXState.h
*********************************************************************/

#ifndef ESXState_H
#define ESXState_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## dependency EmbeddedSystemX
#include "EmbeddedSystemX.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Discrete.h"
//## package Application::Discrete

//## class ESXState
class ESXState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    virtual ~ESXState();
    
    ////    Operations    ////
    
    //## operation ConfigX(EmbeddedSystemX*)
    virtual void ConfigX(EmbeddedSystemX* esx);
    
    //## operation ConfigurationEnded(EmbeddedSystemX*)
    virtual void ConfigurationEnded(EmbeddedSystemX* esx);
    
    //## operation Configure(EmbeddedSystemX*)
    virtual void Configure(EmbeddedSystemX* esx);
    
    //## operation Exit(EmbeddedSystemX*)
    virtual void Exit(EmbeddedSystemX* esx);
    
    //## operation Initialized(EmbeddedSystemX*)
    virtual void Initialized(EmbeddedSystemX* esx);
    
    //## operation Restart(EmbeddedSystemX*)
    virtual void Restart(EmbeddedSystemX* esx);
    
    //## operation Resume(EmbeddedSystemX*)
    virtual void Resume(EmbeddedSystemX* esx);
    
    //## operation SelfTestFailed(EmbeddedSystemX*,int)
    virtual void SelfTestFailed(EmbeddedSystemX* esx, int ErrorNo);
    
    //## operation SelftestOk(EmbeddedSystemX*)
    virtual void SelftestOk(EmbeddedSystemX* esx);
    
    //## operation Start(EmbeddedSystemX*)
    virtual void Start(EmbeddedSystemX* esx);
    
    //## operation Stop(EmbeddedSystemX*)
    virtual void Stop(EmbeddedSystemX* esx);
    
    //## operation Suspend(EmbeddedSystemX*)
    virtual void Suspend(EmbeddedSystemX* esx);
    
    //## operation chMode(EmbeddedSystemX *)
    virtual void chMode(EmbeddedSystemX * esx);
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////

protected :

    //## operation ESXState()
    ESXState();
    
    //## operation ChangeState(EmbeddedSystemX*,ESXState*)
    void ChangeState(EmbeddedSystemX* esx, ESXState* s);
    
    //## operation defaultChange()
    void defaultChange();

public :

    //## operation DisplayState()
    virtual void DisplayState();

protected :

    //## operation Display(char*)
    void Display(char* name);
    
    char* stateName;		//## attribute stateName

public :

    //## auto_generated
    char* getStateName() const;
    
    //## operation RunRealTime(EmbeddedSystemX*)
    virtual void RunRealTime(EmbeddedSystemX* esx);
    
    //## operation Simulate(EmbeddedSystemX*)
    virtual void Simulate(EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/ESXState.h
*********************************************************************/
