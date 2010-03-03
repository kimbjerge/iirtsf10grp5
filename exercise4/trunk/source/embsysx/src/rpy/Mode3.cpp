/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Mode3
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Mode3.cpp
*********************************************************************/

//## auto_generated
#include "Mode3.h"
//## operation chMode(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance()
#include "ESXState.h"
//## dependency Mode1
#include "Mode1.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## dependency Ready
#include "Ready.h"
//## dependency Suspended
#include "Suspended.h"
//## dependency Suspended
class Suspended;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
class Ready;

//## package Discrete

//## class Mode3
ESXState* Mode3::_instance;

Mode3::Mode3() {
}

Mode3::~Mode3() {
}

ESXState* Mode3::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new Mode3;
    }
    return _instance;
    //#]
}

void Mode3::chMode(EmbeddedSystemX* esx) {
    //#[ operation chMode(EmbeddedSystemX*)
    ChangeState(esx, Mode1::Instance());
    //#]
}

void Mode3::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode3");
    //#]
}

void Mode3::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

void Mode3::eventX(EmbeddedSystemX* esx) {
    //#[ operation eventX(EmbeddedSystemX*)
    esx->setStrategy(&itsM3Strategy);
    esx->responseEventX();
    //#]
}

M3Strategy* Mode3::getItsM3Strategy() const {
    return (M3Strategy*) &itsM3Strategy;
}

ESXState* Mode3::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Mode3.cpp
*********************************************************************/
