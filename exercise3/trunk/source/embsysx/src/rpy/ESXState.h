/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: ESXState
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/ESXState.h
*********************************************************************/

#ifndef ESXState_H
#define ESXState_H

//## auto_generated
#include <oxf/oxf.h>
//## dependency EmbeddedSystemX
#include "EmbeddedSystemX.h"
//## auto_generated
#include "Default.h"
//## package Default

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
    
    //## operation eventX(EmbeddedSystemX*)
    virtual void eventX(EmbeddedSystemX* esx);
    
    //## operation eventY(EmbeddedSystemX*)
    virtual void eventY(EmbeddedSystemX* esx);
    
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
    
    //## operation DisplayState()
    virtual void DisplayState();
    
    //## operation Display(char*)
    void Display(char* name);
    
    char* stateName;		//## attribute stateName

public :

    //## auto_generated
    char* getStateName() const;
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/ESXState.h
*********************************************************************/
