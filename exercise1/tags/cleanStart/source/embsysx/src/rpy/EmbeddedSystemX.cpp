/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: EmbeddedSystemX
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/EmbeddedSystemX.cpp
*********************************************************************/

//## auto_generated
#include "EmbeddedSystemX.h"
//## operation ChangeState(ESXState*)
#include "ESXState.h"
//## package Default

//## class EmbeddedSystemX
EmbeddedSystemX::~EmbeddedSystemX() {
    cleanUpRelations();
}

void EmbeddedSystemX::ChangeState(ESXState* s) {
    //#[ operation ChangeState(ESXState*)
    itsESXState = s;
    //#]
}

ESXState* EmbeddedSystemX::getItsESXState() const {
    return itsESXState;
}

void EmbeddedSystemX::setItsESXState(ESXState* p_ESXState) {
    itsESXState = p_ESXState;
}

void EmbeddedSystemX::cleanUpRelations() {
    if(itsESXState != NULL)
        {
            itsESXState = NULL;
        }
}

void EmbeddedSystemX::ConfigX() {
    //#[ operation ConfigX()
    itsESXState->ConfigX(this);
    //#]
}

void EmbeddedSystemX::ConfigurationEnded() {
    //#[ operation ConfigurationEnded()
    itsESXState->ConfigurationEnded(this);
    //#]
}

void EmbeddedSystemX::Configure() {
    //#[ operation Configure()
    itsESXState->Configure(this);
    //#]
}

void EmbeddedSystemX::Exit() {
    //#[ operation Exit()
    itsESXState->Exit(this);
    //#]
}

void EmbeddedSystemX::Initialized() {
    //#[ operation Initialized()
    itsESXState->Initialized(this);
    //#]
}

void EmbeddedSystemX::Restart() {
    //#[ operation Restart()
    itsESXState->Restart(this);
    //#]
}

void EmbeddedSystemX::Resume() {
    //#[ operation Resume()
    itsESXState->Resume(this);
    //#]
}

void EmbeddedSystemX::SelfTestFailed(int ErrorNo) {
    //#[ operation SelfTestFailed(int)
    itsESXState->SelfTestFailed(this, ErrorNo);
    //#]
}

void EmbeddedSystemX::SelftestOk() {
    //#[ operation SelftestOk()
    itsESXState->SelftestOk(this);
    //#]
}

void EmbeddedSystemX::Start() {
    //#[ operation Start()
    itsESXState->Start(this);
    //#]
}

void EmbeddedSystemX::Stop() {
    //#[ operation Stop()
    itsESXState->Stop(this);
    //#]
}

void EmbeddedSystemX::Suspend() {
    //#[ operation Suspend()
    itsESXState->Suspend(this);
    //#]
}

void EmbeddedSystemX::chMode() {
    //#[ operation chMode()
    itsESXState->chMode(this);
    //#]
}

void EmbeddedSystemX::eventX() {
    //#[ operation eventX()
    itsESXState->eventX(this);
    //#]
}

void EmbeddedSystemX::eventY() {
    //#[ operation eventY()
    itsESXState->eventY(this);
    //#]
}

EmbeddedSystemX::EmbeddedSystemX() {
    itsESXState = NULL;
    //#[ operation EmbeddedSystemX()
    //KBE??? itsESXState = PowerOnSelfTest::Instance();
    //#]
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/EmbeddedSystemX.cpp
*********************************************************************/
