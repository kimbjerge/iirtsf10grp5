/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Tester
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Tester.cpp
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
//## package Application::Discrete

//## class Tester
Tester::Tester(IOxfActive* theActiveContext) : speed(3000) {
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
    state_3_subState = OMNonState;
    state_3_active = OMNonState;
    state_2_subState = OMNonState;
    state_2_active = OMNonState;
    state_2_timeout = NULL;
}

void Tester::cancelTimeouts() {
    if(ROOT_timeout != NULL)
        {
            ROOT_timeout->cancel();
            ROOT_timeout = NULL;
        }
    if(state_2_timeout != NULL)
        {
            state_2_timeout->cancel();
            state_2_timeout = NULL;
        }
}

bool Tester::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(ROOT_timeout == arg)
        {
            ROOT_timeout = NULL;
            res = true;
        }
    if(state_2_timeout == arg)
        {
            state_2_timeout = NULL;
            res = true;
        }
    return res;
}

int Tester::getSpeed() const {
    return speed;
}

void Tester::setSpeed(int p_speed) {
    speed = p_speed;
}

void Tester::rootState_entDef() {
    {
        rootState_subState = WaitToStart;
        rootState_active = WaitToStart;
        ROOT_timeout = scheduleTimeout(1000, NULL);
    }
}

IOxfReactive::TakeEventStatus Tester::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case WaitToStart:
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
                            TestLoop_entDef();
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case TestLoop:
        {
            res = TestLoop_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void Tester::TestLoop_entDef() {
    rootState_subState = TestLoop;
    rootState_active = TestLoop;
    state_2_entDef();
    state_3_entDef();
}

void Tester::TestLoop_exit() {
    state_2_exit();
    
    state_3_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus Tester::TestLoop_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(state_2_processEvent() > 0)
        {
            res = eventConsumed;
            if(!IS_IN(TestLoop))
                {
                    return res;
                }
        }
    if(state_3_processEvent() > 0)
        {
            res = eventConsumed;
            if(!IS_IN(TestLoop))
                {
                    return res;
                }
        }
    
    return res;
}

void Tester::state_3_entDef() {
    
    state_3_subState = Mode;
    state_3_active = Mode;
}

IOxfReactive::TakeEventStatus Tester::state_3_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

void Tester::state_2_entDef() {
    
    state_2_subState = Running;
    state_2_active = Running;
    state_2_timeout = scheduleTimeout(speed, NULL);
}

void Tester::state_2_exit() {
    if(state_2_subState == Running)
        {
            if(state_2_timeout != NULL)
                {
                    state_2_timeout->cancel();
                    state_2_timeout = NULL;
                }
        }
    state_2_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus Tester::state_2_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(state_2_active == Running)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_2_timeout)
                        {
                            if(state_2_timeout != NULL)
                                {
                                    state_2_timeout->cancel();
                                    state_2_timeout = NULL;
                                }
                            //#[ transition 2 
                            RunTests();
                            //#]
                            state_2_subState = Running;
                            state_2_active = Running;
                            state_2_timeout = scheduleTimeout(speed, NULL);
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Tester.cpp
*********************************************************************/
