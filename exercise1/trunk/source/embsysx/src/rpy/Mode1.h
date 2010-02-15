/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode1
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode1.h
*********************************************************************/

#ifndef Mode1_H
#define Mode1_H

//## auto_generated
#include <oxf/oxf.h>
//## dependency Mode2
#include "Mode2.h"
//## class Mode1
#include "RTLState.h"
//## operation chMode(RealTimeLoop *)
class RealTimeLoop;

//## package Default

//## class Mode1
class Mode1 : public RTLState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Mode1();
    
    //## auto_generated
    virtual ~Mode1();
    
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
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode1.h
*********************************************************************/
