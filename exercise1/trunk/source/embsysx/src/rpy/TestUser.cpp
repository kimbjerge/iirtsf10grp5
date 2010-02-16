/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: TestUser
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/TestUser.cpp
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
        rootState_subState = tStartTest;
        rootState_active = tStartTest;
        ROOT_timeout = scheduleTimeout(1000, NULL);
    }
}

IOxfReactive::TakeEventStatus TestUser::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case tStartTest:
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
                            itsEmbeddedSystemX->SelfTestFailed(44);
                            //#]
                            rootState_subState = tFailure;
                            rootState_active = tFailure;
                            ROOT_timeout = scheduleTimeout(500, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case tFailure:
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
                            itsEmbeddedSystemX->Restart();
                            //#]
                            rootState_subState = tPowerOnSelfTest;
                            rootState_active = tPowerOnSelfTest;
                            ROOT_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case tOperational:
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
                            //#[ transition 6 
                            itsEmbeddedSystemX->Configure();
                            //#]
                            rootState_subState = tConfigruation;
                            rootState_active = tConfigruation;
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
                            //#[ transition 2 
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
        case tPowerOnSelfTest:
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
                            itsEmbeddedSystemX->SelftestOk();
                            //#]
                            rootState_subState = tInitializing;
                            rootState_active = tInitializing;
                            ROOT_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case tInitializing:
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
                            //#[ transition 5 
                            itsEmbeddedSystemX->Initialized();
                            //#]
                            rootState_subState = tOperational;
                            rootState_active = tOperational;
                            ROOT_timeout = scheduleTimeout(500, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case tConfigruation:
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
                            //#[ transition 7 
                            itsEmbeddedSystemX->ConfigurationEnded();
                            //#]
                            rootState_subState = tReady;
                            rootState_active = tReady;
                            ROOT_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case tReady:
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
                            //#[ transition 8 
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
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/TestUser.cpp
*********************************************************************/
