/********************************************************************
	Rhapsody	: 7.5
	Login		: phm
	Component	: DefaultComponent
	Configuration 	: LinuxSource
	Model Element	: RealTimeLoop
//!	Generated Date	: Mon, 15, Feb 2010
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/

//## auto_generated
#include "RealTimeLoop.h"
//## operation Stop(Operational*)
#include "Operational.h"
//## operation ChangeSubSubState(RTLState*)
#include "RTLState.h"
//## package Default

//## class RealTimeLoop
RealTimeLoop* RealTimeLoop::_instance = 0;

RealTimeLoop::RealTimeLoop() {
    itsRTLState = NULL;
}

RealTimeLoop::~RealTimeLoop() {
    cleanUpRelations();
}

RealTimeLoop* RealTimeLoop::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new RealTimeLoop();
    }
    return _instance;
    //KBE??? itsRTLState = Mode1::Instance();
    //#]
}

void RealTimeLoop::Stop(Operational* op) {
    //#[ operation Stop(Operational*)
    defaultChange();
    //#]
}

void RealTimeLoop::Suspend(Operational* op) {
    //#[ operation Suspend(Operational*)
    defaultChange();
    //#]
}

void RealTimeLoop::chMode(Operational * op) {
    //#[ operation chMode(Operational *)
    itsRTLState->chMode(this);
    //#]
}

void RealTimeLoop::ChangeSubSubState(RTLState* state) {
    //#[ operation ChangeSubSubState(RTLState*)
    itsRTLState = state;
    //#]
}

RTLState* RealTimeLoop::getItsRTLState() const {
    return itsRTLState;
}

void RealTimeLoop::setItsRTLState(RTLState* p_RTLState) {
    itsRTLState = p_RTLState;
}

void RealTimeLoop::cleanUpRelations() {
    if(itsRTLState != NULL)
        {
            itsRTLState = NULL;
        }
}

void RealTimeLoop::DisplayState() {
    //#[ operation DisplayState()
    Display("RealTimeLoop");
    //#]
}

RealTimeLoop* RealTimeLoop::get_instance() {
    return _instance;
}

void RealTimeLoop::set_instance(RealTimeLoop* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/
