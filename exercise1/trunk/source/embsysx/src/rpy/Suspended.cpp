/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Suspended
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Suspended.cpp
*********************************************************************/

//## auto_generated
#include "Suspended.h"
//## operation Resume(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance()
#include "ESXState.h"
//## dependency Mode1
#include "Mode1.h"
//## dependency Ready
#include "Ready.h"
//## package Default

//## class Suspended
ESXState* Suspended::_instance;

Suspended::Suspended() {
}

Suspended::~Suspended() {
}

ESXState* Suspended::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Suspended;
    }
    return _instance;
    //#]
}

void Suspended::Resume(EmbeddedSystemX* esx) {
    //#[ operation Resume(EmbeddedSystemX*)
    ChangeState(esx, Mode1::Instance());
    //#]
}

void Suspended::Stop(EmbeddedSystemX* esx) {
    //#[ operation Stop(EmbeddedSystemX*)
    ChangeState(esx, Ready::Instance());
    //#]
}

void Suspended::DisplayState() {
    //#[ operation DisplayState()
    Display("Suspended");
    //#]
}

void Suspended::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

ESXState* Suspended::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Suspended.cpp
*********************************************************************/
