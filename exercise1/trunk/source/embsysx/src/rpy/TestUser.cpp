/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: TestUser
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/TestUser.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "TestUser.h"
//## link itsEmbeddedSystemX
#include "EmbeddedSystemX.h"
//## package Default

//## class TestUser
TestUser::TestUser(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsEmbeddedSystemX = NULL;
    initStatechart();
    //#[ operation TestUser()
    itsEmbeddedSystemX = new EmbeddedSystemX();
    itsEmbeddedSystemX->setItsESXState(PowerOnSelfTest::Instance());
    Operational *pOp = Operational::Instance();
    pOp->setItsOpState(Ready::Instance());   
    RealTimeLoop *pRTL = RealTimeLoop::Instance();
    pRTL->setItsRTLState(Mode1::Instance());   
    //#]
}

TestUser::~TestUser() {
    cleanUpRelations();
    cancelTimeouts();
}

EmbeddedSystemX* TestUser::getItsEmbeddedSystemX() const {
    return itsEmbeddedSystemX;
}

void TestUser::setItsEmbeddedSystemX(EmbeddedSystemX* p_EmbeddedSystemX) {
    itsEmbeddedSystemX = p_EmbeddedSystemX;
}

bool TestUser::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void TestUser::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    ROOT_timeout = NULL;
}

void TestUser::cleanUpRelations() {
    if(itsEmbeddedSystemX != NULL)
        {
            itsEmbeddedSystemX = NULL;
        }
}

void TestUser::cancelTimeouts() {
    if(ROOT_timeout != NULL)
        {
            ROOT_timeout->cancel();
            ROOT_timeout = NULL;
        }
}

bool TestUser::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(ROOT_timeout == arg)
        {
            ROOT_timeout = NULL;
            res = true;
        }
    return res;
}

void TestUser::rootState_entDef() {
    {
        rootState_subState = tSelftestOk;
        rootState_active = tSelftestOk;
        ROOT_timeout = scheduleTimeout(1000, NULL);
    }
}

IOxfReactive::TakeEventStatus TestUser::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case tSelftestOk:
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
                            itsEmbeddedSystemX->SelftestOk();
                            //#]
                            rootState_subState = tInitialized;
                            rootState_active = tInitialized;
                            ROOT_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case tInitialized:
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
                            itsEmbeddedSystemX->Initialized();
                            //#]
                            rootState_subState = tStart;
                            rootState_active = tStart;
                            ROOT_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case tStart:
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
                            itsEmbeddedSystemX->Start();
                            //#]
                            rootState_subState = tchMode;
                            rootState_active = tchMode;
                            ROOT_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case tchMode:
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
                            itsEmbeddedSystemX->chMode();
                            //#]
                            rootState_subState = tchMode;
                            rootState_active = tchMode;
                            ROOT_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/TestUser.cpp
*********************************************************************/
