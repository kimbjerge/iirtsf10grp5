/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode3
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode3.h
*********************************************************************/

#ifndef Mode3_H
#define Mode3_H

//## auto_generated
#include <oxf/oxf.h>
//## class Mode3
#include "RTLState.h"
//## dependency Mode1
#include "Mode1.h"
//## operation chMode(RealTimeLoop *)
class RealTimeLoop;

//## package Default

//## class Mode3
class Mode3 : public RTLState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Mode3();
    
    //## auto_generated
    virtual ~Mode3();
    
    ////    Operations    ////
    
    //## operation Instance()
    static RTLState* Instance();
    
    //## operation chMode(RealTimeLoop *)
    virtual void chMode(RealTimeLoop * rtl);
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    static RTLState* _instance;		//## attribute _instance
    
    //## operation DisplayState()
    virtual void DisplayState();

private :

    //## auto_generated
    static RTLState* get_instance();
    
    //## auto_generated
    static void set_instance(RTLState* p__instance);
};

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode3.h
*********************************************************************/
