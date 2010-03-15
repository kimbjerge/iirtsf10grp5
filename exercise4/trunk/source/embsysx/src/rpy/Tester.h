/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Tester
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Tester.h
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

//## package Discrete

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

protected :

//#[ ignore
    enum Tester_Enum {
        OMNonState = 0,
        Running = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* ROOT_timeout;
//#]
};

inline bool Tester::rootState_IN() const {
    return true;
}

inline bool Tester::Running_IN() const {
    return rootState_subState == Running;
}

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Tester.h
*********************************************************************/
