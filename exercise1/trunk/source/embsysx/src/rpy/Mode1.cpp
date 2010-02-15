/********************************************************************
	Rhapsody	: 7.5
	Login		: phm
	Component	: DefaultComponent
	Configuration 	: LinuxSource
	Model Element	: Mode1
//!	Generated Date	: Mon, 15, Feb 2010
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode1.cpp
*********************************************************************/

//## auto_generated
#include "Mode1.h"
//## operation chMode(RealTimeLoop *)
#include "RealTimeLoop.h"
//## package Default

//## class Mode1
RTLState* Mode1::_instance = 0;

Mode1::Mode1() {
}

Mode1::~Mode1() {
}

RTLState* Mode1::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Mode1;
    }
    return _instance;
    //#]
}

void Mode1::chMode(RealTimeLoop * rtl) {
    //#[ operation chMode(RealTimeLoop *)
    ChangeState(rtl, Mode2::Instance());
    //#]
}

void Mode1::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode1");
    //#]
}

RTLState* Mode1::get_instance() {
    return _instance;
}

void Mode1::set_instance(RTLState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode1.cpp
*********************************************************************/
