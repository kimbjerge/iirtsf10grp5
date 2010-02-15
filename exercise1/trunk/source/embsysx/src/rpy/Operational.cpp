/********************************************************************
	Rhapsody	: 7.5
	Login		: phm
	Component	: DefaultComponent
	Configuration 	: LinuxSource
	Model Element	: Operational
//!	Generated Date	: Mon, 15, Feb 2010
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Operational.cpp
*********************************************************************/

//## auto_generated
#include "Operational.h"
//## operation ConfigurationEnded(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation ChangeSubState(OpState*)
#include "OpState.h"
//## package Default

//## class Operational
Operational* Operational::_instance = 0;

Operational::~Operational() {
    cleanUpRelations();
}

Operational* Operational::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Operational;
    }
    //KBE??? itsOpState = Ready::Instance();
    return _instance;
    //#]
}

void Operational::Restart(EmbeddedSystemX* esx) {
    //#[ operation Restart(EmbeddedSystemX*)
    defaultChange();
    //#]
}

Operational::Operational() {
    itsOpState = NULL;
    //#[ operation Operational()
    //#]
}

void Operational::ConfigurationEnded(EmbeddedSystemX* esx) {
    //#[ operation ConfigurationEnded(EmbeddedSystemX*)
    itsOpState->ConfigurationEnded(this);
    //#]
}

void Operational::Configure(EmbeddedSystemX* esx) {
    //#[ operation Configure(EmbeddedSystemX*)
    itsOpState->Configure(this);
    //#]
}

void Operational::Resume(EmbeddedSystemX* esx) {
    //#[ operation Resume(EmbeddedSystemX*)
    itsOpState->Resume(this);
    //#]
}

void Operational::Start(EmbeddedSystemX* esx) {
    //#[ operation Start(EmbeddedSystemX*)
    itsOpState->Start(this);
    //#]
}

void Operational::Stop(EmbeddedSystemX* esx) {
    //#[ operation Stop(EmbeddedSystemX*)
    itsOpState->Stop(this);
    //#]
}

void Operational::Suspend(EmbeddedSystemX* esx) {
    //#[ operation Suspend(EmbeddedSystemX*)
    itsOpState->Suspend(this);
    //#]
}

void Operational::cleanUpRelations() {
    if(itsOpState != NULL)
        {
            itsOpState = NULL;
        }
}

void Operational::ChangeSubState(OpState* state) {
    //#[ operation ChangeSubState(OpState*)
    itsOpState = state;
    //#]
}

OpState* Operational::getItsOpState() const {
    return itsOpState;
}

void Operational::setItsOpState(OpState* p_OpState) {
    itsOpState = p_OpState;
}

void Operational::DisplayState() {
    //#[ operation DisplayState()
    Display("Operational");
    //#]
}

void Operational::chMode(EmbeddedSystemX * esx) {
    //#[ operation chMode(EmbeddedSystemX *)
    itsOpState->chMode(this);
    //#]
}

Operational* Operational::get_instance() {
    return _instance;
}

void Operational::set_instance(Operational* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Operational.cpp
*********************************************************************/
