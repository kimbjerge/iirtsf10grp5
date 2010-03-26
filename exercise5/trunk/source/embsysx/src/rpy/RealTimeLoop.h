/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: RealTimeLoop
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/

#ifndef RealTimeLoop_H
#define RealTimeLoop_H

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
//## class RealTimeLoop
#include "Operational.h"
//## auto_generated
#include "Discrete.h"
//## dependency Mode1
class Mode1;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
class Ready;

//## dependency RealTimeExecution
class RealTimeExecution;

//## dependency Suspended
class Suspended;

//## operation Instance(EmbeddedSystemX *)
class ESXState;

//## operation Instance(EmbeddedSystemX *)
class EmbeddedSystemX;

//## operation ChangeModeSettingAndState(ModeSettingAndState *)
class ModeSettingAndState;

//## operation ChangeSimulateAndState(SimulateAndState *)
class SimulateAndState;

//## package Application::Discrete

//## class RealTimeLoop
class RealTimeLoop : public Operational {
    ////    Friends    ////
    
public :

    friend class ModeSettingAndState;
    
    friend class SimulateAndState;
    
    ////    Constructors and destructors    ////
    
    //## operation RealTimeLoop()
    RealTimeLoop();
    
    //## auto_generated
    virtual ~RealTimeLoop();
    
    ////    Operations    ////
    
    //## operation ChangeModeSettingAndState(ModeSettingAndState *)
    void ChangeModeSettingAndState(ModeSettingAndState * state);
    
    //## operation ChangeSimulateAndState(SimulateAndState *)
    void ChangeSimulateAndState(SimulateAndState * state);
    
    //## operation Instance(EmbeddedSystemX *)
    static ESXState * Instance(EmbeddedSystemX * esx);
    
    //## operation RunRealTime(EmbeddedSystemX *)
    virtual void RunRealTime(EmbeddedSystemX * esx);
    
    //## operation Simulate(EmbeddedSystemX *)
    virtual void Simulate(EmbeddedSystemX * esx);
    
    //## operation Stop(EmbeddedSystemX *)
    virtual void Stop(EmbeddedSystemX * esx);
    
    //## operation Suspend(EmbeddedSystemX *)
    virtual void Suspend(EmbeddedSystemX * esx);
    
    //## operation chMode(EmbeddedSystemX *)
    virtual void chMode(EmbeddedSystemX * esx);
    
    //## operation DisplayState()
    virtual void DisplayState();
    
    ////    Additional operations    ////

private :

    //## auto_generated
    static RealTimeLoop* get_instance();
    
    //## auto_generated
    static void set_instance(RealTimeLoop* p__instance);

public :

    //## auto_generated
    ModeSettingAndState* getItsModeSettingAndState() const;
    
    //## auto_generated
    void setItsModeSettingAndState(ModeSettingAndState* p_ModeSettingAndState);
    
    //## auto_generated
    SimulateAndState* getItsSimulateAndState() const;
    
    //## auto_generated
    void setItsSimulateAndState(SimulateAndState* p_SimulateAndState);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    static RealTimeLoop* _instance;		//## attribute _instance

public :

    ModeSettingAndState* itsModeSettingAndState;		//## link itsModeSettingAndState
    
    SimulateAndState* itsSimulateAndState;		//## link itsSimulateAndState
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeLoop.h
*********************************************************************/
