/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Tester
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Tester.h
*********************************************************************/

#ifndef Tester_H
#define Tester_H

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
#include <list>
//## auto_generated
#include <iterator>
//## link itsTestCase
#include "TestCase.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
#include "Discrete.h"
//## dependency Test1
class Test1;

//## dependency Test2
class Test2;

//## dependency Test3
class Test3;

//## link itsEmbeddedSystemX
class EmbeddedSystemX;

//## package Application::Discrete

//## class Tester
class Tester : public OMReactive {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## operation Tester()
    Tester(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Tester();
    
    ////    Operations    ////
    
    //## operation RunTests()
    void RunTests();
    
    ////    Additional operations    ////
    
    //## auto_generated
    std::list<TestCase*>::const_iterator getItsTestCase() const;
    
    //## auto_generated
    std::list<TestCase*>::const_iterator getItsTestCaseEnd() const;
    
    //## auto_generated
    void addItsTestCase(TestCase* p_TestCase);
    
    //## auto_generated
    void removeItsTestCase(TestCase* p_TestCase);
    
    //## auto_generated
    void clearItsTestCase();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    std::list<TestCase*> itsTestCase;		//## link itsTestCase

public :

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
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    EmbeddedSystemX* itsEmbeddedSystemX;		//## link itsEmbeddedSystemX

public :

    //## auto_generated
    int getSpeed() const;
    
    //## auto_generated
    void setSpeed(int p_speed);

protected :

    int speed;		//## attribute speed

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // WaitToStart:
    //## statechart_method
    inline bool WaitToStart_IN() const;
    
    // TestLoop:
    //## statechart_method
    inline bool TestLoop_IN() const;
    
    //## statechart_method
    void TestLoop_entDef();
    
    //## statechart_method
    void TestLoop_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus TestLoop_processEvent();
    
    // state_3:
    //## statechart_method
    inline bool state_3_IN() const;
    
    //## statechart_method
    void state_3_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_3_processEvent();
    
    // Mode:
    //## statechart_method
    inline bool Mode_IN() const;
    
    // state_2:
    //## statechart_method
    inline bool state_2_IN() const;
    
    //## statechart_method
    void state_2_entDef();
    
    //## statechart_method
    void state_2_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_2_processEvent();
    
    // Running:
    //## statechart_method
    inline bool Running_IN() const;

protected :

//#[ ignore
    enum Tester_Enum {
        OMNonState = 0,
        WaitToStart = 1,
        TestLoop = 2,
        state_3 = 3,
        Mode = 4,
        state_2 = 5,
        Running = 6
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* ROOT_timeout;
    
    int state_3_subState;
    
    int state_3_active;
    
    int state_2_subState;
    
    int state_2_active;
    
    IOxfTimeout* state_2_timeout;
//#]
};

inline bool Tester::rootState_IN() const {
    return true;
}

inline bool Tester::WaitToStart_IN() const {
    return rootState_subState == WaitToStart;
}

inline bool Tester::TestLoop_IN() const {
    return rootState_subState == TestLoop;
}

inline bool Tester::state_3_IN() const {
    return TestLoop_IN();
}

inline bool Tester::Mode_IN() const {
    return state_3_subState == Mode;
}

inline bool Tester::state_2_IN() const {
    return TestLoop_IN();
}

inline bool Tester::Running_IN() const {
    return state_2_subState == Running;
}

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Tester.h
*********************************************************************/
