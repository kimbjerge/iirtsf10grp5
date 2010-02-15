/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RTLState
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/RTLState.h
*********************************************************************/

#ifndef RTLState_H
#define RTLState_H

//## auto_generated
#include <oxf/oxf.h>
//## dependency RealTimeLoop
#include "RealTimeLoop.h"
//## package Default

//## class RTLState
class RTLState {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RTLState();
    
    //## auto_generated
    virtual ~RTLState();
    
    ////    Operations    ////
    
    //## operation chMode(RealTimeLoop *)
    virtual void chMode(RealTimeLoop * rtl);

protected :

    //## operation ChangeState(RealTimeLoop*,RTLState*)
    void ChangeState(RealTimeLoop* rtl, RTLState* s);
    
    //## operation defaultChange()
    void defaultChange();
    
    //## operation Display(char*)
    void Display(char* name);
    
    //## operation DisplayState()
    virtual void DisplayState();
};

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/RTLState.h
*********************************************************************/
