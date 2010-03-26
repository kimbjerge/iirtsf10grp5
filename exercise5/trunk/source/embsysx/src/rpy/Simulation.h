/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Simulation
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Simulation.h
*********************************************************************/

#ifndef Simulation_H
#define Simulation_H

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
//## class Simulation
#include "SimulateAndState.h"
//## dependency RealTimeExecution
class RealTimeExecution;

//## operation Instance(EmbeddedSystemX*)
class EmbeddedSystemX;

//## operation RunRealTime(RealTimeLoop*,EmbeddedSystemX*)
class RealTimeLoop;

//## link itsSimulatorTask
class SimulatorTask;

//## package Application::Discrete

//## class Simulation
class Simulation : public SimulateAndState {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Simulation();
    
    ////    Operations    ////
    
    //## operation DisplayState()
    virtual void DisplayState();
    
    //## operation Instance(EmbeddedSystemX*)
    static SimulateAndState* Instance(EmbeddedSystemX* esx);
    
    //## operation RunRealTime(RealTimeLoop*,EmbeddedSystemX*)
    virtual void RunRealTime(RealTimeLoop* rtl, EmbeddedSystemX* esx);
    
    ////    Additional operations    ////
    
    //## auto_generated
    SimulatorTask* getItsSimulatorTask() const;
    
    //## auto_generated
    void setItsSimulatorTask(SimulatorTask* p_SimulatorTask);

protected :

    //## auto_generated
    void cleanUpRelations();

private :

    //## auto_generated
    static Simulation* get_instance();
    
    ////    Attributes    ////

protected :

    static Simulation* _instance;		//## attribute _instance
    
    ////    Relations and components    ////
    
    SimulatorTask* itsSimulatorTask;		//## link itsSimulatorTask

public :

    //## operation ~Simulation()
    ~Simulation();

private :

    //## auto_generated
    static void set_instance(Simulation* p__instance);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Simulation.h
*********************************************************************/
