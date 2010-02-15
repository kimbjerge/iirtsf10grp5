/********************************************************************
	Rhapsody	: 7.5
	Login		: phm
	Component	: DefaultComponent
	Configuration 	: LinuxSource
	Model Element	: Ready
//!	Generated Date	: Mon, 15, Feb 2010
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Ready.cpp
*********************************************************************/

//## auto_generated
#include "Ready.h"
//## operation Configure(Operational*)
#include "Operational.h"
//## package Default

//## class Ready
OpState* Ready::_instance = 0;

Ready::Ready() {
}

Ready::~Ready() {
}

void Ready::Configure(Operational* op) {
    //#[ operation Configure(Operational*)
    defaultChange();
    //#]
}

OpState* Ready::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Ready;
    }
    return _instance;
    //#]
}

void Ready::Start(Operational* op) {
    //#[ operation Start(Operational*)
    ChangeState(op, RealTimeLoop::Instance());
    //#]
}

void Ready::DisplayState() {
    //#[ operation DisplayState()
    Display("Ready");
    //#]
}

OpState* Ready::get_instance() {
    return _instance;
}

void Ready::set_instance(OpState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Ready.cpp
*********************************************************************/
