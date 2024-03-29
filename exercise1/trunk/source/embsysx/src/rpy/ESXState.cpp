/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: ESXState
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/ESXState.cpp
*********************************************************************/

//## auto_generated
#include "ESXState.h"
//## package Default

//## class ESXState
ESXState::~ESXState() {
}

void ESXState::ConfigX(EmbeddedSystemX* esx) {
    //#[ operation ConfigX(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ESXState::ConfigurationEnded(EmbeddedSystemX* esx) {
    //#[ operation ConfigurationEnded(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ESXState::Configure(EmbeddedSystemX* esx) {
    //#[ operation Configure(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ESXState::Exit(EmbeddedSystemX* esx) {
    //#[ operation Exit(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ESXState::Initialized(EmbeddedSystemX* esx) {
    //#[ operation Initialized(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ESXState::Restart(EmbeddedSystemX* esx) {
    //#[ operation Restart(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ESXState::Resume(EmbeddedSystemX* esx) {
    //#[ operation Resume(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ESXState::SelfTestFailed(EmbeddedSystemX* esx, int ErrorNo) {
    //#[ operation SelfTestFailed(EmbeddedSystemX*,int)
    defaultChange();
    //#]
}

void ESXState::SelftestOk(EmbeddedSystemX* esx) {
    //#[ operation SelftestOk(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ESXState::Start(EmbeddedSystemX* esx) {
    //#[ operation Start(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ESXState::Stop(EmbeddedSystemX* esx) {
    //#[ operation Stop(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ESXState::Suspend(EmbeddedSystemX* esx) {
    //#[ operation Suspend(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void ESXState::chMode(EmbeddedSystemX * esx) {
    //#[ operation chMode(EmbeddedSystemX *)
    defaultChange();
    //#]
}

void ESXState::eventY(EmbeddedSystemX* esx) {
    //#[ operation eventY(EmbeddedSystemX*)
    defaultChange();
    //#]
}

ESXState::ESXState() {
    //#[ operation ESXState()
    //#]
}

void ESXState::eventX(EmbeddedSystemX* esx) {
    //#[ operation eventX(EmbeddedSystemX*)
    //#]
}

void ESXState::ChangeState(EmbeddedSystemX* esx, ESXState* s) {
    //#[ operation ChangeState(EmbeddedSystemX*,ESXState*)
	esx->ChangeState(s);
    //#]
}

void ESXState::defaultChange() {
    //#[ operation defaultChange()
	 std::cout << "Nothing Changed" << std::endl;
    //#]
}

void ESXState::DisplayState() {
    //#[ operation DisplayState()
    Display("ESXState");
    //#]
}

void ESXState::Display(char* name) {
    //#[ operation Display(char*)
    std::cout << name << std::endl;
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/ESXState.cpp
*********************************************************************/
