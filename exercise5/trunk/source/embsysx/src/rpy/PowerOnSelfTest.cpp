/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: PowerOnSelfTest
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/PowerOnSelfTest.cpp
*********************************************************************/

//## auto_generated
#include "PowerOnSelfTest.h"
//## operation SelfTestFailed(EmbeddedSystemX*,int)
#include "EmbeddedSystemX.h"
//## dependency Failure
#include "Failure.h"
//## dependency Initializing
#include "Initializing.h"
//## package Application::Discrete

//## class PowerOnSelfTest
PowerOnSelfTest::PowerOnSelfTest() {
}

PowerOnSelfTest::~PowerOnSelfTest() {
}

ESXState* PowerOnSelfTest::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
    	_instance = new PowerOnSelfTest;
    }
    return _instance;
    //#]
}

void PowerOnSelfTest::SelfTestFailed(EmbeddedSystemX* esx, int ErrorNo) {
    //#[ operation SelfTestFailed(EmbeddedSystemX*,int)
    ChangeState(esx, Failure::Instance());
    //#]
}

void PowerOnSelfTest::SelftestOk(EmbeddedSystemX* esx) {
    //#[ operation SelftestOk(EmbeddedSystemX*)
    ChangeState(esx, Initializing::Instance());
    //#]
}

void PowerOnSelfTest::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

void PowerOnSelfTest::DisplayState() {
    //#[ operation DisplayState()
    Display("PowerOnSelfTest");
    //#]
}

ESXState* PowerOnSelfTest::_instance = 0;

ESXState* PowerOnSelfTest::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/PowerOnSelfTest.cpp
*********************************************************************/
