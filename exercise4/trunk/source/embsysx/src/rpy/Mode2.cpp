/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode2
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Mode2.cpp
*********************************************************************/

//## auto_generated
#include "Mode2.h"
//## operation Instance(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance(EmbeddedSystemX*)
#include "ESXState.h"
//## dependency Mode3
#include "Mode3.h"
//## dependency Mode1
#include "Mode1.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency Ready
#include "Ready.h"
//## dependency Suspended
#include "Suspended.h"
//## dependency Mode1
class Mode1;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Suspended
class Suspended;

//## dependency Ready
class Ready;

//## package Discrete

//## class Mode2
ESXState* Mode2::_instance = 0;

Mode2::Mode2() {
}

Mode2::~Mode2() {
}

ESXState* Mode2::Instance(EmbeddedSystemX* esx) {
    //#[ operation Instance(EmbeddedSystemX*)
    Mode2 *pMode;
    if (_instance == 0)
    {
    	_instance = new Mode2;
    }
    pMode = (Mode2 *)_instance;
    esx->setStrategy(pMode->getItsM2Strategy());
    return _instance;
    //#]
}

void Mode2::chMode(EmbeddedSystemX* esx) {
    //#[ operation chMode(EmbeddedSystemX*)
    ChangeState(esx, Mode3::Instance(esx));
    //#]
}

void Mode2::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode2");
    //#]
}

void Mode2::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

M2Strategy* Mode2::getItsM2Strategy() const {
    return (M2Strategy*) &itsM2Strategy;
}

ESXState* Mode2::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Mode2.cpp
*********************************************************************/
