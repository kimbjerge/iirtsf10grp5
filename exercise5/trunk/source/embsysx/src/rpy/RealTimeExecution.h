/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: RealTimeExecution
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeExecution.h
*********************************************************************/

#ifndef RealTimeExecution_H
#define RealTimeExecution_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Discrete.h"
//## class RealTimeExecution
#include "SimulateAndState.h"
//## dependency Simulation
class Simulation;

//## operation Instance(EmbeddedSystemX*)
class EmbeddedSystemX;

//## operation Simulate(RealTimeLoop*,EmbeddedSystemX*)
class RealTimeLoop;

//## package Application::Discrete

//## class RealTimeExecution
class RealTimeExecution : public SimulateAndState {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RealTimeExecution();
    
    //## auto_generated
    virtual ~RealTimeExecution();
    
    ////    Operations    ////
    
    //## operation DisplayState()
    virtual void DisplayState();
    
    //## operation Instance(EmbeddedSystemX*)
    static SimulateAndState* Instance(EmbeddedSystemX* esx);
    
    //## operation Simulate(RealTimeLoop*,EmbeddedSystemX*)
    virtual void Simulate(RealTimeLoop* rtl, EmbeddedSystemX* esx);
    
    ////    Additional operations    ////

private :

    //## auto_generated
    static SimulateAndState* get_instance();
    
    //## auto_generated
    static void set_instance(SimulateAndState* p__instance);
    
    ////    Attributes    ////

protected :

    static SimulateAndState* _instance;		//## attribute _instance
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeExecution.h
*********************************************************************/
