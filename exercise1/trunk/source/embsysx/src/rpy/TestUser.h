/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: TestUser
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/TestUser.h
*********************************************************************/

#ifndef TestUser_H
#define TestUser_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## dependency Operational
#include "Operational.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency RealTimeLoop
#include "RealTimeLoop.h"
//## dependency Ready
#include "Ready.h"
//## dependency Mode1
#include "Mode1.h"
//## link itsEmbeddedSystemX
class EmbeddedSystemX;

//## package Default

//## class TestUser
class TestUser : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## operation TestUser()
    TestUser(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~TestUser();
    
    ////    Additional operations    ////
    
    //## auto_generated
    EmbeddedSystemX* getItsEmbeddedSystemX() const;
    
    //## auto_generated
    void setItsEmbeddedSystemX(EmbeddedSystemX* p_EmbeddedSystemX);
    
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
    
    ////    Relations and components    ////
    
    EmbeddedSystemX* itsEmbeddedSystemX;		//## link itsEmbeddedSystemX
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // tStartTest:
    //## statechart_method
    inline bool tStartTest_IN() const;
    
    // tReady:
    //## statechart_method
    inline bool tReady_IN() const;
    
    // tPowerOnSelfTest:
    //## statechart_method
    inline bool tPowerOnSelfTest_IN() const;
    
    // tOperational:
    //## statechart_method
    inline bool tOperational_IN() const;
    
    // tInitializing:
    //## statechart_method
    inline bool tInitializing_IN() const;
    
    // tFailure:
    //## statechart_method
    inline bool tFailure_IN() const;
    
    // tConfigruation:
    //## statechart_method
    inline bool tConfigruation_IN() const;
    
    // tchMode:
    //## statechart_method
    inline bool tchMode_IN() const;

protected :

//#[ ignore
    enum TestUser_Enum {
        OMNonState = 0,
        tStartTest = 1,
        tReady = 2,
        tPowerOnSelfTest = 3,
        tOperational = 4,
        tInitializing = 5,
        tFailure = 6,
        tConfigruation = 7,
        tchMode = 8
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* ROOT_timeout;
//#]
};

inline bool TestUser::rootState_IN() const {
    return true;
}

inline bool TestUser::tStartTest_IN() const {
    return rootState_subState == tStartTest;
}

inline bool TestUser::tReady_IN() const {
    return rootState_subState == tReady;
}

inline bool TestUser::tPowerOnSelfTest_IN() const {
    return rootState_subState == tPowerOnSelfTest;
}

inline bool TestUser::tOperational_IN() const {
    return rootState_subState == tOperational;
}

inline bool TestUser::tInitializing_IN() const {
    return rootState_subState == tInitializing;
}

inline bool TestUser::tFailure_IN() const {
    return rootState_subState == tFailure;
}

inline bool TestUser::tConfigruation_IN() const {
    return rootState_subState == tConfigruation;
}

inline bool TestUser::tchMode_IN() const {
    return rootState_subState == tchMode;
}

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/TestUser.h
*********************************************************************/
