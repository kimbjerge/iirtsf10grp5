/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: TestContinous
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/TestContinous.cpp
*********************************************************************/

//## auto_generated
#include "oxf/omthread.h"
//## auto_generated
#include "TestContinous.h"
//## dependency Medicine
#include "Medicine.h"
//## dependency NormalGenerator
#include "NormalGenerator.h"
//## link itsPatientModel
#include "PatientModel.h"
//## dependency RecordProxy
#include "RecordProxy.h"
//## dependency RecordSimulate
#include "RecordSimulate.h"
//## dependency RecordWfdb
#include "RecordWfdb.h"
//## package Application::Continuous

//## class TestContinous
void TestContinous::ConfigurePatientModel() {
    //#[ operation ConfigurePatientModel()
    itsPatientModel->SetStrategy(new NormalGenerator());
    itsPatientModel->AddMedicine(new Medicine());  
    #ifdef _TARGET
    itsPatientModel->SetRecord(new RecordProxy(new RecordWfdb("100s")));   
    #else
    itsPatientModel->SetRecord(new RecordProxy(new RecordSimulate));   
    //itsPatientModel->SetRecord(new RecordSimulate);   
    #endif
    //#]
}

TestContinous::TestContinous(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsPatientModel = NULL;
    initStatechart();
    //#[ operation TestContinous()
    itsPatientModel = new PatientModel();
    //#]
}

TestContinous::~TestContinous() {
    //#[ operation ~TestContinous()
    delete itsPatientModel;
    //#]
    cleanUpRelations();
    cancelTimeouts();
}

void TestContinous::GenerateSamples() {
    //#[ operation GenerateSamples()
    itsPatientModel->CalcSample();
    itsPatientModel->GenerateSignals();
    //#]
}

PatientModel* TestContinous::getItsPatientModel() const {
    return itsPatientModel;
}

void TestContinous::setItsPatientModel(PatientModel* p_PatientModel) {
    itsPatientModel = p_PatientModel;
}

bool TestContinous::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void TestContinous::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_4_subState = OMNonState;
    state_4_active = OMNonState;
    state_4_timeout = NULL;
    state_3_subState = OMNonState;
    state_3_active = OMNonState;
    state_3_timeout = NULL;
    ROOT_timeout = NULL;
}

void TestContinous::cleanUpRelations() {
    if(itsPatientModel != NULL)
        {
            itsPatientModel = NULL;
        }
}

void TestContinous::cancelTimeouts() {
    if(state_4_timeout != NULL)
        {
            state_4_timeout->cancel();
            state_4_timeout = NULL;
        }
    if(state_3_timeout != NULL)
        {
            state_3_timeout->cancel();
            state_3_timeout = NULL;
        }
    if(ROOT_timeout != NULL)
        {
            ROOT_timeout->cancel();
            ROOT_timeout = NULL;
        }
}

bool TestContinous::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_4_timeout == arg)
        {
            state_4_timeout = NULL;
            res = true;
        }
    if(state_3_timeout == arg)
        {
            state_3_timeout = NULL;
            res = true;
        }
    if(ROOT_timeout == arg)
        {
            ROOT_timeout = NULL;
            res = true;
        }
    return res;
}

void TestContinous::rootState_entDef() {
    {
        rootState_subState = Idle;
        rootState_active = Idle;
        ROOT_timeout = scheduleTimeout(1000, NULL);
    }
}

IOxfReactive::TakeEventStatus TestContinous::rootState_processEvent() {
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
                            ConfigurePatientModel();
                            //#]
                            rootState_subState = Configurated;
                            rootState_active = Configurated;
                            ROOT_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case Configurated:
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
                            itsPatientModel->StartSimulation();
                            //#]
                            Running_entDef();
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

void TestContinous::Running_entDef() {
    rootState_subState = Running;
    rootState_active = Running;
    state_3_entDef();
    state_4_entDef();
}

void TestContinous::Running_exit() {
    state_3_exit();
    state_4_exit();
    
}

IOxfReactive::TakeEventStatus TestContinous::Running_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(state_3_processEvent() > 0)
        {
            res = eventConsumed;
            if(!IS_IN(Running))
                {
                    return res;
                }
        }
    if(state_4_processEvent() > 0)
        {
            res = eventConsumed;
            if(!IS_IN(Running))
                {
                    return res;
                }
        }
    
    return res;
}

void TestContinous::state_4_entDef() {
    
    state_4_subState = sample;
    state_4_active = sample;
    state_4_timeout = scheduleTimeout(1000, NULL);
}

void TestContinous::state_4_exit() {
    if(state_4_subState == sample)
        {
            if(state_4_timeout != NULL)
                {
                    state_4_timeout->cancel();
                    state_4_timeout = NULL;
                }
        }
    state_4_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus TestContinous::state_4_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(state_4_active == sample)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_4_timeout)
                        {
                            if(state_4_timeout != NULL)
                                {
                                    state_4_timeout->cancel();
                                    state_4_timeout = NULL;
                                }
                            //#[ transition 5 
                            GenerateSamples();
                            //#]
                            state_4_subState = sample;
                            state_4_active = sample;
                            state_4_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void TestContinous::state_3_entDef() {
    
    state_3_subState = pulse;
    state_3_active = pulse;
    state_3_timeout = scheduleTimeout(5500, NULL);
}

void TestContinous::state_3_exit() {
    if(state_3_subState == pulse)
        {
            if(state_3_timeout != NULL)
                {
                    state_3_timeout->cancel();
                    state_3_timeout = NULL;
                }
        }
    state_3_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus TestContinous::state_3_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(state_3_active == pulse)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_3_timeout)
                        {
                            if(state_3_timeout != NULL)
                                {
                                    state_3_timeout->cancel();
                                    state_3_timeout = NULL;
                                }
                            //#[ transition 6 
                            itsPatientModel->GeneratePulse();
                            //#]
                            state_3_subState = pulse;
                            state_3_active = pulse;
                            state_3_timeout = scheduleTimeout(5500, NULL);
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/TestContinous.cpp
*********************************************************************/
