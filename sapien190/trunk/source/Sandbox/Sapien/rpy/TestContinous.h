/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: TestContinous
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/TestContinous.h
*********************************************************************/

#ifndef TestContinous_H
#define TestContinous_H

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
#include "Continuous.h"
//## auto_generated
#include "oxf/omreactive.h"
//## auto_generated
#include "oxf/state.h"
//## auto_generated
#include "oxf/event.h"
//## dependency Medicine
class Medicine;

//## dependency NormalGenerator
class NormalGenerator;

//## link itsPatientModel
class PatientModel;

//## dependency RecordProxy
class RecordProxy;

//## dependency RecordSimulate
class RecordSimulate;

//## dependency RecordWfdb
class RecordWfdb;

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Relations and components    ////

////    Framework operations    ////

////    Framework    ////

// rootState:

// Running:

// state_4:

// sample:

// state_3:

// pulse:

// Idle:

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Relations and components    ////

////    Framework operations    ////

////    Framework    ////

// rootState:

// Running:

// state_4:

// sample:

// state_3:

// pulse:

// Idle:

// Configurated:

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Relations and components    ////

////    Framework operations    ////

////    Framework    ////

// rootState:

// Running:

// state_4:

// sample:

// state_3:

//## package Application::Continuous

//## class TestContinous
class TestContinous : public OMReactive {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation ConfigurePatientModel()
    void ConfigurePatientModel();
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////

protected :

    PatientModel* itsPatientModel;		//## link itsPatientModel
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## operation TestContinous()
    TestContinous(IOxfActive* theActiveContext = 0);
    
    //## operation ~TestContinous()
    ~TestContinous();
    
    //## operation GenerateSamples()
    void GenerateSamples();
    
    //## auto_generated
    PatientModel* getItsPatientModel() const;
    
    //## auto_generated
    void setItsPatientModel(PatientModel* p_PatientModel);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Running:
    //## statechart_method
    inline bool Running_IN() const;
    
    //## statechart_method
    void Running_entDef();
    
    //## statechart_method
    void Running_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Running_processEvent();
    
    // state_4:
    //## statechart_method
    inline bool state_4_IN() const;
    
    //## statechart_method
    void state_4_entDef();
    
    //## statechart_method
    void state_4_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_4_processEvent();
    
    // sample:
    //## statechart_method
    inline bool sample_IN() const;
    
    // state_3:
    //## statechart_method
    inline bool state_3_IN() const;
    
    //## statechart_method
    void state_3_entDef();
    
    //## statechart_method
    void state_3_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_3_processEvent();
    
    // pulse:
    //## statechart_method
    inline bool pulse_IN() const;
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    // Configurated:
    //## statechart_method
    inline bool Configurated_IN() const;

protected :

//#[ ignore
    enum TestContinous_Enum {
        OMNonState = 0,
        Running = 1,
        state_4 = 2,
        sample = 3,
        state_3 = 4,
        pulse = 5,
        Idle = 6,
        Configurated = 7
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_4_subState;
    
    int state_4_active;
    
    IOxfTimeout* state_4_timeout;
    
    int state_3_subState;
    
    int state_3_active;
    
    IOxfTimeout* state_3_timeout;
    
    IOxfTimeout* ROOT_timeout;
//#]
};

inline bool TestContinous::rootState_IN() const {
    return true;
}

inline bool TestContinous::Running_IN() const {
    return rootState_subState == Running;
}

inline bool TestContinous::state_4_IN() const {
    return Running_IN();
}

inline bool TestContinous::sample_IN() const {
    return state_4_subState == sample;
}

inline bool TestContinous::state_3_IN() const {
    return Running_IN();
}

inline bool TestContinous::pulse_IN() const {
    return state_3_subState == pulse;
}

inline bool TestContinous::Idle_IN() const {
    return rootState_subState == Idle;
}

inline bool TestContinous::Configurated_IN() const {
    return rootState_subState == Configurated;
}

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/TestContinous.h
*********************************************************************/
