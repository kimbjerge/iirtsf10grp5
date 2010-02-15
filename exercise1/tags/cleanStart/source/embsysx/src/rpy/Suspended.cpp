/********************************************************************
	Rhapsody	: 7.5
	Login		: phm
	Component	: DefaultComponent
	Configuration 	: LinuxSource
	Model Element	: Suspended
//!	Generated Date	: Mon, 15, Feb 2010
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Suspended.cpp
*********************************************************************/

//## auto_generated
#include "Suspended.h"
//## operation Resume(Operational*)
#include "Operational.h"
//## package Default

//## class Suspended
OpState* Suspended::_instance = 0;

Suspended::Suspended() {
}

Suspended::~Suspended() {
}

OpState* Suspended::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Suspended;
    }
    return _instance;
    //#]
}

void Suspended::Resume(Operational* op) {
    //#[ operation Resume(Operational*)
    defaultChange();
    //#]
}

void Suspended::Stop(Operational* op) {
    //#[ operation Stop(Operational*)
    defaultChange();
    //#]
}

void Suspended::DisplayState() {
    //#[ operation DisplayState()
    Display("Suspended");
    //#]
}

OpState* Suspended::get_instance() {
    return _instance;
}

void Suspended::set_instance(OpState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Suspended.cpp
*********************************************************************/
