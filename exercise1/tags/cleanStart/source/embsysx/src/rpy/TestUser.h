/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: TestUser
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/TestUser.h
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
    
    // tStart:
    //## statechart_method
    inline bool tStart_IN() const;
    
    // tSelftestOk:
    //## statechart_method
    inline bool tSelftestOk_IN() const;
    
    // tInitialized:
    //## statechart_method
    inline bool tInitialized_IN() const;
    
    // tchMode:
    //## statechart_method
    inline bool tchMode_IN() const;

protected :

//#[ ignore
    enum TestUser_Enum {
        OMNonState = 0,
        tStart = 1,
        tSelftestOk = 2,
        tInitialized = 3,
        tchMode = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* ROOT_timeout;
//#]
};

inline bool TestUser::rootState_IN() const {
    return true;
}

inline bool TestUser::tStart_IN() const {
    return rootState_subState == tStart;
}

inline bool TestUser::tSelftestOk_IN() const {
    return rootState_subState == tSelftestOk;
}

inline bool TestUser::tInitialized_IN() const {
    return rootState_subState == tInitialized;
}

inline bool TestUser::tchMode_IN() const {
    return rootState_subState == tchMode;
}

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/TestUser.h
*********************************************************************/
