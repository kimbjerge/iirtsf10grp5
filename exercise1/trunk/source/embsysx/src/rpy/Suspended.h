/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Suspended
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Suspended.h
*********************************************************************/

#ifndef Suspended_H
#define Suspended_H

//## auto_generated
#include <oxf/oxf.h>
//## class Suspended
#include "OpState.h"
//## operation Resume(Operational*)
class Operational;

//## package Default

//## class Suspended
class Suspended : public OpState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Suspended();
    
    //## auto_generated
    virtual ~Suspended();
    
    ////    Operations    ////
    
    //## operation Instance()
    static OpState* Instance();
    
    //## operation Resume(Operational*)
    virtual void Resume(Operational* op);
    
    //## operation Stop(Operational*)
    virtual void Stop(Operational* op);
    
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
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Suspended.h
*********************************************************************/
