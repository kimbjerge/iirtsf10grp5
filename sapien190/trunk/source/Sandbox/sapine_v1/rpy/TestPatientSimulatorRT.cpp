/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: TestPatientSimulatorRT
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/TestPatientSimulatorRT.cpp
*********************************************************************/

//## auto_generated
#include "TestPatientSimulatorRT.h"
//## link itsSimulatorRealtime
#include "SimulatorRealtime.h"
//## attribute record
#include "Record.h"
//## operation Update(FrameBuffer*)
#include "FrameBuffer.h"
//## auto_generated
#include <oxf/omthread.h>
//## dependency DistributerThread
#include "DistributerThread.h"
//## dependency RealTimeThread
#include "RealTimeThread.h"
//## package Application::Test

//## class TestPatientSimulatorRT
TestPatientSimulatorRT::TestPatientSimulatorRT(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsSimulatorRealtime = NULL;
    initStatechart();
}

TestPatientSimulatorRT::~TestPatientSimulatorRT() {
    cleanUpRelations();
    cancelTimeouts();
}

void TestPatientSimulatorRT::CreateSimulatorRT() {
    //#[ operation CreateSimulatorRT()
    itsSimulatorRealtime = new SimulatorRealtime(5); // Size of framebuffer
    itsSimulatorRealtime->AttachObserver(this); 
    //#]
}

SimulatorRealtime* TestPatientSimulatorRT::getItsSimulatorRealtime() const {
    return itsSimulatorRealtime;
}

void TestPatientSimulatorRT::setItsSimulatorRealtime(SimulatorRealtime* p_SimulatorRealtime) {
    itsSimulatorRealtime = p_SimulatorRealtime;
}

void TestPatientSimulatorRT::cleanUpRelations() {
    if(itsSimulatorRealtime != NULL)
        {
            itsSimulatorRealtime = NULL;
        }
}

void TestPatientSimulatorRT::InitializeSimulatorRT() {
    //#[ operation InitializeSimulatorRT()
    itsSimulatorRealtime->CreatePatientModel(SimulatorRealtime::Normal);
    //#]
}

Record * TestPatientSimulatorRT::getRecord() const {
    return record;
}

void TestPatientSimulatorRT::setRecord(Record * p_record) {
    record = p_record;
}

bool TestPatientSimulatorRT::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void TestPatientSimulatorRT::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    ROOT_timeout = NULL;
    state_7_subState = OMNonState;
    state_7_active = OMNonState;
    state_7_timeout = NULL;
    state_6_subState = OMNonState;
    state_6_active = OMNonState;
    state_6_timeout = NULL;
    state_10_subState = OMNonState;
    state_10_active = OMNonState;
    state_10_timeout = NULL;
}

void TestPatientSimulatorRT::cancelTimeouts() {
    if(ROOT_timeout != NULL)
        {
            ROOT_timeout->cancel();
            ROOT_timeout = NULL;
        }
    if(state_7_timeout != NULL)
        {
            state_7_timeout->cancel();
            state_7_timeout = NULL;
        }
    if(state_6_timeout != NULL)
        {
            state_6_timeout->cancel();
            state_6_timeout = NULL;
        }
    if(state_10_timeout != NULL)
        {
            state_10_timeout->cancel();
            state_10_timeout = NULL;
        }
}

bool TestPatientSimulatorRT::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(ROOT_timeout == arg)
        {
            ROOT_timeout = NULL;
            res = true;
        }
    if(state_7_timeout == arg)
        {
            state_7_timeout = NULL;
            res = true;
        }
    if(state_6_timeout == arg)
        {
            state_6_timeout = NULL;
            res = true;
        }
    if(state_10_timeout == arg)
        {
            state_10_timeout = NULL;
            res = true;
        }
    return res;
}

void TestPatientSimulatorRT::CreateScenario() {
    //#[ operation CreateScenario()
    #ifdef _LINUX
    record = itsSimulatorRealtime->CreateWfdbSimRecord("100s"); 
    #else
    record = itsSimulatorRealtime->CreateSimRecord(); 
    #endif
    itsSimulatorRealtime->AssignRecord(record);
    itsSimulatorRealtime->SetMedicine(SimulatorRealtime::Morphine);
    //#]
}

void TestPatientSimulatorRT::RunTickDistributerThread() {
    //#[ operation RunTickDistributerThread()
    RealTimeThread* pRT = itsSimulatorRealtime->getItsRealTimeThread();
    pRT->run();
    //#]
}

void TestPatientSimulatorRT::RunTickRealTimeThread() {
    //#[ operation RunTickRealTimeThread()
    DistributerThread* pDT = itsSimulatorRealtime->getItsDistributerThread();
    pDT->run();
    //#]
}

void TestPatientSimulatorRT::Update(FrameBuffer* fp) {
    //#[ operation Update(FrameBuffer*)
    std::cout << "FrameBuffer Updated:" << std::endl;
    for (fp->First(); fp->IsDone(); fp->Next())
       std::cout << fp->GetSample() << ", ";
    std::cout <<  std::endl;
    //#]
}

void TestPatientSimulatorRT::rootState_entDef() {
    {
        rootState_subState = Idle;
        rootState_active = Idle;
        ROOT_timeout = scheduleTimeout(1000, NULL);
    }
}

IOxfReactive::TakeEventStatus TestPatientSimulatorRT::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == ROOT_timeout)
                        {
                            if(ROOT_timeout != NULL)
                                {
                                    ROOT_timeout->cancel();
                                    ROOT_timeout = NULL;
                                }
                            //#[ transition 1 
                            CreateSimulatorRT();
                            //#]
                            rootState_subState = Created;
                            rootState_active = Created;
                            ROOT_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case Created:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == ROOT_timeout)
                        {
                            if(ROOT_timeout != NULL)
                                {
                                    ROOT_timeout->cancel();
                                    ROOT_timeout = NULL;
                                }
                            //#[ transition 2 
                            InitializeSimulatorRT();
                            //#]
                            rootState_subState = Initialized;
                            rootState_active = Initialized;
                            ROOT_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case Initialized:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == ROOT_timeout)
                        {
                            if(ROOT_timeout != NULL)
                                {
                                    ROOT_timeout->cancel();
                                    ROOT_timeout = NULL;
                                }
                            //#[ transition 3 
                            CreateScenario();
                            //#]
                            rootState_subState = Stopped;
                            rootState_active = Stopped;
                            ROOT_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case Stopped:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == ROOT_timeout)
                        {
                            if(ROOT_timeout != NULL)
                                {
                                    ROOT_timeout->cancel();
                                    ROOT_timeout = NULL;
                                }
                            //#[ transition 4 
                            itsSimulatorRealtime->StartSimulation();
                            //#]
                            rootState_subState = Running;
                            rootState_active = Running;
                            ROOT_timeout = scheduleTimeout(5000, NULL);
                            state_6_entDef();
                            state_10_entDef();
                            state_7_entDef();
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case Running:
        {
            res = Running_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void TestPatientSimulatorRT::Running_entDef() {
    rootState_subState = Running;
    rootState_active = Running;
    ROOT_timeout = scheduleTimeout(5000, NULL);
    state_6_entDef();
    state_7_entDef();
    state_10_entDef();
}

void TestPatientSimulatorRT::Running_exit() {
    state_6_exit();
    state_7_exit();
    state_10_exit();
    if(ROOT_timeout != NULL)
        {
            ROOT_timeout->cancel();
            ROOT_timeout = NULL;
        }
}

IOxfReactive::TakeEventStatus TestPatientSimulatorRT::Running_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(state_6_processEvent() > 0)
        {
            res = eventConsumed;
            if(!IS_IN(Running))
                {
                    return res;
                }
        }
    if(state_7_processEvent() > 0)
        {
            res = eventConsumed;
            if(!IS_IN(Running))
                {
                    return res;
                }
        }
    if(state_10_processEvent() > 0)
        {
            res = eventConsumed;
            if(!IS_IN(Running))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = Running_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus TestPatientSimulatorRT::Running_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == ROOT_timeout)
                {
                    Running_exit();
                    //#[ transition 5 
                    itsSimulatorRealtime->StopSimulation();
                    //#]
                    rootState_subState = Stopped;
                    rootState_active = Stopped;
                    ROOT_timeout = scheduleTimeout(1000, NULL);
                    res = eventConsumed;
                }
        }
    
    return res;
}

void TestPatientSimulatorRT::state_7_entDef() {
    
    state_7_subState = SimRealTimeThread;
    state_7_active = SimRealTimeThread;
    state_7_timeout = scheduleTimeout(100, NULL);
}

void TestPatientSimulatorRT::state_7_exit() {
    if(state_7_subState == SimRealTimeThread)
        {
            if(state_7_timeout != NULL)
                {
                    state_7_timeout->cancel();
                    state_7_timeout = NULL;
                }
        }
    state_7_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus TestPatientSimulatorRT::state_7_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(state_7_active == SimRealTimeThread)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_7_timeout)
                        {
                            if(state_7_timeout != NULL)
                                {
                                    state_7_timeout->cancel();
                                    state_7_timeout = NULL;
                                }
                            //#[ transition 6 
                            RunTickRealTimeThread();
                            //#]
                            state_7_subState = SimRealTimeThread;
                            state_7_active = SimRealTimeThread;
                            state_7_timeout = scheduleTimeout(100, NULL);
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void TestPatientSimulatorRT::state_6_entDef() {
    
    state_6_subState = SimDistributerThread;
    state_6_active = SimDistributerThread;
    state_6_timeout = scheduleTimeout(500, NULL);
}

void TestPatientSimulatorRT::state_6_exit() {
    if(state_6_subState == SimDistributerThread)
        {
            if(state_6_timeout != NULL)
                {
                    state_6_timeout->cancel();
                    state_6_timeout = NULL;
                }
        }
    state_6_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus TestPatientSimulatorRT::state_6_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(state_6_active == SimDistributerThread)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_6_timeout)
                        {
                            if(state_6_timeout != NULL)
                                {
                                    state_6_timeout->cancel();
                                    state_6_timeout = NULL;
                                }
                            //#[ transition 7 
                            RunTickDistributerThread();
                            //#]
                            state_6_subState = SimDistributerThread;
                            state_6_active = SimDistributerThread;
                            state_6_timeout = scheduleTimeout(500, NULL);
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void TestPatientSimulatorRT::state_10_entDef() {
    
    state_10_subState = Alternate;
    state_10_active = Alternate;
    state_10_timeout = scheduleTimeout(3000, NULL);
}

void TestPatientSimulatorRT::state_10_exit() {
    if(state_10_subState == Alternate)
        {
            if(state_10_timeout != NULL)
                {
                    state_10_timeout->cancel();
                    state_10_timeout = NULL;
                }
        }
    state_10_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus TestPatientSimulatorRT::state_10_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(state_10_active == Alternate)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            if(state_10_timeout != NULL)
                                {
                                    state_10_timeout->cancel();
                                    state_10_timeout = NULL;
                                }
                            //#[ transition 8 
                            itsSimulatorRealtime->AlternateRecord(record);
                            //#]
                            state_10_subState = Alternate;
                            state_10_active = Alternate;
                            state_10_timeout = scheduleTimeout(3000, NULL);
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/TestPatientSimulatorRT.cpp
*********************************************************************/
