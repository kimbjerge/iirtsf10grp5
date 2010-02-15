/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: OpState
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/OpState.h
*********************************************************************/

#ifndef OpState_H
#define OpState_H

//## auto_generated
#include <oxf/oxf.h>
//## dependency Operational
#include "Operational.h"
//## package Default

//## class OpState
class OpState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    OpState();
    
    //## auto_generated
    virtual ~OpState();
    
    ////    Operations    ////

protected :

    //## operation ChangeState(Operational*,OpState*)
    void ChangeState(Operational* op, OpState* s);

public :

    //## operation ConfigurationEnded(Operational*)
    virtual void ConfigurationEnded(Operational* op);
    
    //## operation Configure(Operational*)
    virtual void Configure(Operational* op);
    
    //## operation Restart(Operational*)
    virtual void Restart(Operational* op);
    
    //## operation Resume(Operational*)
    virtual void Resume(Operational* op);
    
    //## operation Start(Operational*)
    virtual void Start(Operational* op);
    
    //## operation Stop(Operational*)
    virtual void Stop(Operational* op);
    
    //## operation Suspend(Operational*)
    virtual void Suspend(Operational* op);
    
    //## operation chMode(Operational *)
    virtual void chMode(Operational * op);

protected :

    //## operation defaultChange()
    void defaultChange();
    
    //## operation Display(char*)
    void Display(char* name);
    
    //## operation DisplayState()
    virtual void DisplayState();
};

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/OpState.h
*********************************************************************/
