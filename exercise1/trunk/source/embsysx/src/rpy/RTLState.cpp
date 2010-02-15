/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RTLState
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/RTLState.cpp
*********************************************************************/

//## auto_generated
#include "RTLState.h"
//## package Default

//## class RTLState
RTLState::RTLState() {
}

RTLState::~RTLState() {
}

void RTLState::chMode(RealTimeLoop * rtl) {
    //#[ operation chMode(RealTimeLoop *)
    defaultChange();
    //#]
}

void RTLState::ChangeState(RealTimeLoop* rtl, RTLState* s) {
    //#[ operation ChangeState(RealTimeLoop*,RTLState*)
    rtl->ChangeSubSubState(s);
    DisplayState();
    //#]
}

void RTLState::defaultChange() {
    //#[ operation defaultChange()
    //#]
}

void RTLState::Display(char* name) {
    //#[ operation Display(char*)
    cout << name << endl;
    //#]
}

void RTLState::DisplayState() {
    //#[ operation DisplayState()
    Display("RTLState");
    //#]
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/RTLState.cpp
*********************************************************************/
