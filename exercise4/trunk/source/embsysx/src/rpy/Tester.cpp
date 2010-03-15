/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Tester
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Tester.cpp
*********************************************************************/

//## auto_generated
#include "Tester.h"
//## dependency Test1
#include "Test1.h"
//## dependency Test2
#include "Test2.h"
//## dependency Test3
#include "Test3.h"
//## link itsEmbeddedSystemX
#include "EmbeddedSystemX.h"
//## auto_generated
#include <oxf/omthread.h>
//## package Discrete

//## class Tester
Tester::Tester(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsEmbeddedSystemX = NULL;
    initStatechart();
    //#[ operation Tester()
    itsEmbeddedSystemX = new EmbeddedSystemX();
    addItsTestCase(new Test1(itsEmbeddedSystemX));
    addItsTestCase(new Test2(itsEmbeddedSystemX));
    addItsTestCase(new Test3(itsEmbeddedSystemX));
    
    //#]
}

Tester::~Tester() {
    cleanUpRelations();
    cancelTimeouts();
}

void Tester::RunTests() {
    //#[ operation RunTests()
    std::list<TestCase*>::const_iterator iter;
    iter = itsTestCase.begin();
    while (iter != itsTestCase.end()){
        TestCase *pTest = *iter;
        pTest->PerformTest();
        iter++;
    }
    //#]
}

std::list<TestCase*>::const_iterator Tester::getItsTestCase() const {
    std::list<TestCase*>::const_iterator iter;
    iter = itsTestCase.begin();
    return iter;
}

std::list<TestCase*>::const_iterator Tester::getItsTestCaseEnd() const {
    return itsTestCase.end();
}

void Tester::addItsTestCase(TestCase* p_TestCase) {
    itsTestCase.push_back(p_TestCase);
}

void Tester::removeItsTestCase(TestCase* p_TestCase) {
    std::list<TestCase*>::iterator pos = std::find(itsTestCase.begin(), itsTestCase.end(),p_TestCase);
    if (pos != itsTestCase.end()) {
    	itsTestCase.erase(pos);
    }
}

void Tester::clearItsTestCase() {
    itsTestCase.clear();
}

void Tester::cleanUpRelations() {
    if(itsEmbeddedSystemX != NULL)
        {
            itsEmbeddedSystemX = NULL;
        }
    {
        itsTestCase.clear();
    }
}

EmbeddedSystemX* Tester::getItsEmbeddedSystemX() const {
    return itsEmbeddedSystemX;
}

void Tester::setItsEmbeddedSystemX(EmbeddedSystemX* p_EmbeddedSystemX) {
    itsEmbeddedSystemX = p_EmbeddedSystemX;
}

bool Tester::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Tester::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    ROOT_timeout = NULL;
}

void Tester::cancelTimeouts() {
    if(ROOT_timeout != NULL)
        {
            ROOT_timeout->cancel();
            ROOT_timeout = NULL;
        }
}

bool Tester::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(ROOT_timeout == arg)
        {
            ROOT_timeout = NULL;
            res = true;
        }
    return res;
}

void Tester::rootState_entDef() {
    {
        rootState_subState = Running;
        rootState_active = Running;
        ROOT_timeout = scheduleTimeout(4000, NULL);
    }
}

IOxfReactive::TakeEventStatus Tester::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(rootState_active == Running)
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
                            RunTests();
                            //#]
                            rootState_subState = Running;
                            rootState_active = Running;
                            ROOT_timeout = scheduleTimeout(4000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Tester.cpp
*********************************************************************/
