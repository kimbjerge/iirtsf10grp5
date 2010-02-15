/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeLoop
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/

#ifndef RealTimeLoop_H
#define RealTimeLoop_H

//## auto_generated
#include <oxf/oxf.h>
//## class RealTimeLoop
#include "OpState.h"
//## operation ChangeSubSubState(RTLState*)
class RTLState;

//## operation Stop(Operational*)
class Operational;

//## package Default

//## class RealTimeLoop
class RealTimeLoop : public OpState {
public :

    friend class RTLState;
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    RealTimeLoop();
    
    //## auto_generated
    virtual ~RealTimeLoop();
    
    ////    Operations    ////
    
    //## operation Instance()
    static RealTimeLoop* Instance();
    
    //## operation Stop(Operational*)
    virtual void Stop(Operational* op);
    
    //## operation Suspend(Operational*)
    virtual void Suspend(Operational* op);
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    static RealTimeLoop* _instance;		//## attribute _instance

public :

    //## operation chMode(Operational *)
    virtual void chMode(Operational * op);

private :

    //## operation ChangeSubSubState(RTLState*)
    void ChangeSubSubState(RTLState* state);

public :

    //## auto_generated
    RTLState* getItsRTLState() const;
    
    //## auto_generated
    void setItsRTLState(RTLState* p_RTLState);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    RTLState* itsRTLState;		//## link itsRTLState
    
    //## operation DisplayState()
    virtual void DisplayState();

private :

    //## auto_generated
    static RealTimeLoop* get_instance();
    
    //## auto_generated
    static void set_instance(RealTimeLoop* p__instance);
};

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/
