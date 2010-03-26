/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: ModeSettingAndState
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/ModeSettingAndState.cpp
*********************************************************************/

//## auto_generated
#include "ModeSettingAndState.h"
//## operation chMode(RealTimeLoop *,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## package Application::Discrete

//## class ModeSettingAndState
ModeSettingAndState::ModeSettingAndState() {
}

ModeSettingAndState::~ModeSettingAndState() {
}

void ModeSettingAndState::ChangeState(RealTimeLoop* rtl, ModeSettingAndState* state) {
    //#[ operation ChangeState(RealTimeLoop*,ModeSettingAndState*)
    rtl->ChangeModeSettingAndState(state);
    //#]
}

void ModeSettingAndState::chMode(RealTimeLoop * rtl, EmbeddedSystemX* esx) {
    //#[ operation chMode(RealTimeLoop *,EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ModeSettingAndState::Display(char* name) {
    //#[ operation Display(char*)
    std::cout << name;
    //#]
}

void ModeSettingAndState::DisplayState() {
    //#[ operation DisplayState()
    Display("ModeSettingAndState");
    //#]
}

void ModeSettingAndState::defaultChange() {
    //#[ operation defaultChange()
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/ModeSettingAndState.cpp
*********************************************************************/
