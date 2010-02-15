/********************************************************************
	Rhapsody	: 7.5
	Login		: phm
	Component	: DefaultComponent
	Configuration 	: LinuxSource
	Model Element	: PowerOnSelfTest
//!	Generated Date	: Mon, 15, Feb 2010
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/PowerOnSelfTest.cpp
*********************************************************************/

//## auto_generated
#include "PowerOnSelfTest.h"
//## operation SelfTestFailed(EmbeddedSystemX*,int)
#include "EmbeddedSystemX.h"
//## package Default

//## class PowerOnSelfTest
ESXState* PowerOnSelfTest::_instance = 0;

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

ESXState* PowerOnSelfTest::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/PowerOnSelfTest.cpp
*********************************************************************/
