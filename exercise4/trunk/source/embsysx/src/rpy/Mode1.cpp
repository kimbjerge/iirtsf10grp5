/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode1
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Mode1.cpp
*********************************************************************/

//## auto_generated
#include "Mode1.h"
//## operation Instance(EmbeddedSystemX* )
#include "EmbeddedSystemX.h"
//## operation Instance(EmbeddedSystemX* )
#include "ESXState.h"
//## dependency Mode2
#include "Mode2.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency Ready
#include "Ready.h"
//## dependency Suspended
#include "Suspended.h"
//## dependency Ready
class Ready;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Suspended
class Suspended;

//## package Discrete

//## class Mode1
ESXState* Mode1::_instance = 0;

Mode1::Mode1() {
}

Mode1::~Mode1() {
}

ESXState* Mode1::Instance(EmbeddedSystemX* esx) {
    //#[ operation Instance(EmbeddedSystemX* )
    Mode1 *pMode;
    if (_instance == 0)
    {   
    	_instance = new Mode1;
    }
    pMode = (Mode1 *)_instance;
    esx->setStrategy(pMode->getItsM1Strategy());
    return _instance;
    //#]
}

void Mode1::chMode(EmbeddedSystemX* esx) {
    //#[ operation chMode(EmbeddedSystemX*)
    ChangeState(esx, Mode2::Instance(esx));
    //#]
}

void Mode1::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode1");
    //#]
}

void Mode1::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

M1Strategy* Mode1::getItsM1Strategy() const {
    return (M1Strategy*) &itsM1Strategy;
}

ESXState* Mode1::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Mode1.cpp
*********************************************************************/
