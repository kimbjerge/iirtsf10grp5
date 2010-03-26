/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: TestUser
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/TestUser.h
*********************************************************************/

#ifndef TestUser_H
#define TestUser_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## attribute tChMode
#include "ChMode.h"
//## attribute tConfigurationEnded
#include "ConfigurationEnded.h"
//## attribute tConfigure
#include "Configure.h"
//## attribute tExit
#include "Exit.h"
//## attribute tInitialized
#include "Initialized.h"
//## attribute tRestart
#include "Restart.h"
//## attribute tResume
#include "Resume.h"
//## attribute tSelfTestFailed
#include "SelfTestFailed.h"
//## attribute tSelfTestOk
#include "SelfTestOk.h"
//## attribute tStart
#include "Start.h"
//## attribute tStop
#include "Stop.h"
//## attribute tSuspend
#include "Suspend.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Discrete.h"
//## link itsEmbeddedSystemX
class EmbeddedSystemX;

//## package Application::Discrete

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
    
    ////    Framework operations    ////
    
    ////    Framework    ////
    
    ChMode tChMode;		//## attribute tChMode
    
    ConfigurationEnded tConfigurationEnded;		//## attribute tConfigurationEnded
    
    Configure tConfigure;		//## attribute tConfigure
    
    Exit tExit;		//## attribute tExit
    
    Initialized tInitialized;		//## attribute tInitialized
    
    Restart tRestart;		//## attribute tRestart
    
    Resume tResume;		//## attribute tResume
    
    SelfTestFailed tSelfTestFailed;		//## attribute tSelfTestFailed
    
    SelfTestOk tSelfTestOk;		//## attribute tSelfTestOk
    
    Start tStart;		//## attribute tStart
    
    Stop tStop;		//## attribute tStop
    
    Suspend tSuspend;		//## attribute tSuspend
    
    EmbeddedSystemX* itsEmbeddedSystemX;		//## link itsEmbeddedSystemX

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
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/TestUser.h
*********************************************************************/
