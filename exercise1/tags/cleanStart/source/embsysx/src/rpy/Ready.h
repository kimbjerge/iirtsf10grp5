/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Ready
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Ready.h
*********************************************************************/

#ifndef Ready_H
#define Ready_H

//## auto_generated
#include <oxf/oxf.h>
//## class Ready
#include "OpState.h"
//## dependency RealTimeLoop
#include "RealTimeLoop.h"
//## operation Configure(Operational*)
class Operational;

//## package Default

//## class Ready
class Ready : public OpState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Ready();
    
    //## auto_generated
    virtual ~Ready();
    
    ////    Operations    ////
    
    //## operation Configure(Operational*)
    virtual void Configure(Operational* op);
    
    //## operation Instance()
    static OpState* Instance();
    
    //## operation Start(Operational*)
    virtual void Start(Operational* op);
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    static OpState* _instance;		//## attribute _instance
    
    //## operation DisplayState()
    virtual void DisplayState();

private :

    //## auto_generated
    static OpState* get_instance();
    
    //## auto_generated
    static void set_instance(OpState* p__instance);
};

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Ready.h
*********************************************************************/
