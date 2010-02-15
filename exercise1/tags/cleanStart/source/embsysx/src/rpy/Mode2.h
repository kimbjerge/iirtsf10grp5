/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode2
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode2.h
*********************************************************************/

#ifndef Mode2_H
#define Mode2_H

//## auto_generated
#include <oxf/oxf.h>
//## dependency Mode3
#include "Mode3.h"
//## class Mode2
#include "RTLState.h"
//## operation chMode(RealTimeLoop *)
class RealTimeLoop;

//## package Default

//## class Mode2
class Mode2 : public RTLState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Mode2();
    
    //## auto_generated
    virtual ~Mode2();
    
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
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode2.h
*********************************************************************/
