/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: TestPatientSimulatorRT
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/TestPatientSimulatorRT.h
*********************************************************************/

#ifndef TestPatientSimulatorRT_H
#define TestPatientSimulatorRT_H

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
#include "wfdb/wfdb.h"
//## auto_generated
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## class TestPatientSimulatorRT
#include "Observer.h"
//## dependency DistributerThread
class DistributerThread;

//## dependency RealTimeThread
class RealTimeThread;

//## operation Update(FrameBuffer*)
class FrameBuffer;

//## attribute record
class Record;

//## link itsSimulatorRealtime
class SimulatorRealtime;

//## package Application::Test

//## class TestPatientSimulatorRT
class TestPatientSimulatorRT : public OMReactive, public Observer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    TestPatientSimulatorRT(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~TestPatientSimulatorRT();
    
    ////    Operations    ////
    
    //## operation CreateSimulatorRT()
    void CreateSimulatorRT();
    
    ////    Additional operations    ////
    
    //## auto_generated
    SimulatorRealtime* getItsSimulatorRealtime() const;
    
    //## auto_generated
    void setItsSimulatorRealtime(SimulatorRealtime* p_SimulatorRealtime);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    SimulatorRealtime* itsSimulatorRealtime;		//## link itsSimulatorRealtime

public :

    //## operation InitializeSimulatorRT()
    void InitializeSimulatorRT();
    
    //## auto_generated
    Record * getRecord() const;
    
    //## auto_generated
    void setRecord(Record * p_record);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    Record * record;		//## attribute record

public :

    //## operation CreateScenario()
    void CreateScenario();
    
    //## operation RunTickDistributerThread()
    void RunTickDistributerThread();
    
    //## operation RunTickRealTimeThread()
    void RunTickRealTimeThread();
    
    //## operation Update(FrameBuffer*)
    void Update(FrameBuffer* fp);
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Stopped:
    //## statechart_method
    inline bool Stopped_IN() const;
    
    // Running:
    //## statechart_method
    inline bool Running_IN() const;
    
    //## statechart_method
    void Running_entDef();
    
    //## statechart_method
    void Running_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Running_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Running_handleEvent();
    
    // state_7:
    //## statechart_method
    inline bool state_7_IN() const;
    
    //## statechart_method
    void state_7_entDef();
    
    //## statechart_method
    void state_7_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_7_processEvent();
    
    // SimRealTimeThread:
    //## statechart_method
    inline bool SimRealTimeThread_IN() const;
    
    // state_6:
    //## statechart_method
    inline bool state_6_IN() const;
    
    //## statechart_method
    void state_6_entDef();
    
    //## statechart_method
    void state_6_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_6_processEvent();
    
    // SimDistributerThread:
    //## statechart_method
    inline bool SimDistributerThread_IN() const;
    
    // state_10:
    //## statechart_method
    inline bool state_10_IN() const;
    
    //## statechart_method
    void state_10_entDef();
    
    //## statechart_method
    void state_10_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_10_processEvent();
    
    // Alternate:
    //## statechart_method
    inline bool Alternate_IN() const;
    
    // Initialized:
    //## statechart_method
    inline bool Initialized_IN() const;
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    // Created:
    //## statechart_method
    inline bool Created_IN() const;

protected :

//#[ ignore
    enum TestPatientSimulatorRT_Enum {
        OMNonState = 0,
        Stopped = 1,
        Running = 2,
        state_7 = 3,
        SimRealTimeThread = 4,
        state_6 = 5,
        SimDistributerThread = 6,
        state_10 = 7,
        Alternate = 8,
        Initialized = 9,
        Idle = 10,
        Created = 11
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* ROOT_timeout;
    
    int state_7_subState;
    
    int state_7_active;
    
    IOxfTimeout* state_7_timeout;
    
    int state_6_subState;
    
    int state_6_active;
    
    IOxfTimeout* state_6_timeout;
    
    int state_10_subState;
    
    int state_10_active;
    
    IOxfTimeout* state_10_timeout;
//#]
};

inline bool TestPatientSimulatorRT::rootState_IN() const {
    return true;
}

inline bool TestPatientSimulatorRT::Stopped_IN() const {
    return rootState_subState == Stopped;
}

inline bool TestPatientSimulatorRT::Running_IN() const {
    return rootState_subState == Running;
}

inline bool TestPatientSimulatorRT::state_7_IN() const {
    return Running_IN();
}

inline bool TestPatientSimulatorRT::SimRealTimeThread_IN() const {
    return state_7_subState == SimRealTimeThread;
}

inline bool TestPatientSimulatorRT::state_6_IN() const {
    return Running_IN();
}

inline bool TestPatientSimulatorRT::SimDistributerThread_IN() const {
    return state_6_subState == SimDistributerThread;
}

inline bool TestPatientSimulatorRT::state_10_IN() const {
    return Running_IN();
}

inline bool TestPatientSimulatorRT::Alternate_IN() const {
    return state_10_subState == Alternate;
}

inline bool TestPatientSimulatorRT::Initialized_IN() const {
    return rootState_subState == Initialized;
}

inline bool TestPatientSimulatorRT::Idle_IN() const {
    return rootState_subState == Idle;
}

inline bool TestPatientSimulatorRT::Created_IN() const {
    return rootState_subState == Created;
}

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/TestPatientSimulatorRT.h
*********************************************************************/
