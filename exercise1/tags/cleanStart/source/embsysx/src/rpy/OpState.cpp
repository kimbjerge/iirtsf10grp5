/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: OpState
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/OpState.cpp
*********************************************************************/

//## auto_generated
#include "OpState.h"
//## package Default

//## class OpState
OpState::OpState() {
}

OpState::~OpState() {
}

void OpState::ChangeState(Operational* op, OpState* s) {
    //#[ operation ChangeState(Operational*,OpState*)
    op->ChangeSubState(s);
    DisplayState();
    //#]
}

void OpState::ConfigurationEnded(Operational* op) {
    //#[ operation ConfigurationEnded(Operational*)
    defaultChange();
    //#]
}

void OpState::Configure(Operational* op) {
    //#[ operation Configure(Operational*)
    defaultChange();
    //#]
}

void OpState::Restart(Operational* op) {
    //#[ operation Restart(Operational*)
    defaultChange();
    //#]
}

void OpState::Resume(Operational* op) {
    //#[ operation Resume(Operational*)
    defaultChange();
    //#]
}

void OpState::Start(Operational* op) {
    //#[ operation Start(Operational*)
    defaultChange();
    //#]
}

void OpState::Stop(Operational* op) {
    //#[ operation Stop(Operational*)
    defaultChange();
    //#]
}

void OpState::Suspend(Operational* op) {
    //#[ operation Suspend(Operational*)
    defaultChange();
    //#]
}

void OpState::chMode(Operational * op) {
    //#[ operation chMode(Operational *)
    defaultChange();
    //#]
}

void OpState::defaultChange() {
    //#[ operation defaultChange()
    //#]
}

void OpState::Display(char* name) {
    //#[ operation Display(char*)
    cout << name << endl;
    //#]
}

void OpState::DisplayState() {
    //#[ operation DisplayState()
    Display("OpState");
    //#]
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/OpState.cpp
*********************************************************************/
