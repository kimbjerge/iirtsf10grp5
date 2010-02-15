/********************************************************************
	Rhapsody	: 7.5
	Login		: phm
	Component	: DefaultComponent
	Configuration 	: LinuxSource
	Model Element	: Mode2
//!	Generated Date	: Mon, 15, Feb 2010
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode2.cpp
*********************************************************************/

//## auto_generated
#include "Mode2.h"
//## operation chMode(RealTimeLoop *)
#include "RealTimeLoop.h"
//## package Default

//## class Mode2
RTLState* Mode2::_instance = 0;

Mode2::Mode2() {
}

Mode2::~Mode2() {
}

RTLState* Mode2::Instance() {
    //#[ operation Instance()
     if (_instance == 0)
    {
    	_instance = new Mode2;
    }
    return _instance;
    //#]
}

void Mode2::chMode(RealTimeLoop * rtl) {
    //#[ operation chMode(RealTimeLoop *)
    ChangeState(rtl, Mode3::Instance());
    //#]
}

void Mode2::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode2");
    //#]
}

RTLState* Mode2::get_instance() {
    return _instance;
}

void Mode2::set_instance(RTLState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Mode2.cpp
*********************************************************************/
