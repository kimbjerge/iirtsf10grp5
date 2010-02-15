/********************************************************************
	Rhapsody	: 7.5
	Login		: phm
	Component	: DefaultComponent
	Configuration 	: LinuxSource
	Model Element	: Mode3
//!	Generated Date	: Mon, 15, Feb 2010
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode3.cpp
*********************************************************************/

//## auto_generated
#include "Mode3.h"
//## operation chMode(RealTimeLoop *)
#include "RealTimeLoop.h"
//## package Default

//## class Mode3
RTLState* Mode3::_instance = 0;

Mode3::Mode3() {
}

Mode3::~Mode3() {
}

RTLState* Mode3::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Mode3;
    }
    return _instance;
    //#]
}

void Mode3::chMode(RealTimeLoop * rtl) {
    //#[ operation chMode(RealTimeLoop *)
    ChangeState(rtl, Mode1::Instance());
    //#]
}

void Mode3::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode3");
    //#]
}

RTLState* Mode3::get_instance() {
    return _instance;
}

void Mode3::set_instance(RTLState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode3.cpp
*********************************************************************/
