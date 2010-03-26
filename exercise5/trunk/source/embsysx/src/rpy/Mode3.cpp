/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Mode3
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Mode3.cpp
*********************************************************************/

//## auto_generated
#include "Mode3.h"
//## operation Instance(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation chMode(RealTimeLoop*,EmbeddedSystemX*)
#include "RealTimeLoop.h"
//## dependency Mode1
#include "Mode1.h"
//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## package Application::Discrete

//## class Mode3
ModeSettingAndState* Mode3::_instance = 0;

Mode3::Mode3() {
}

Mode3::~Mode3() {
}

ModeSettingAndState* Mode3::Instance(EmbeddedSystemX* esx) {
    //#[ operation Instance(EmbeddedSystemX*)
    Mode3 *pMode;
    if (_instance == 0)
    {
    	_instance = new Mode3;
    }
    pMode = (Mode3 *)_instance;
    esx->setStrategy(pMode->getItsM3Strategy());
    return _instance;
    //#]
}

void Mode3::chMode(RealTimeLoop* rtl, EmbeddedSystemX* esx) {
    //#[ operation chMode(RealTimeLoop*,EmbeddedSystemX*)
    ChangeState(rtl, Mode1::Instance(esx));
    //#]
}

void Mode3::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode3");
    //#]
}

M3Strategy* Mode3::getItsM3Strategy() const {
    return (M3Strategy*) &itsM3Strategy;
}

ModeSettingAndState* Mode3::get_instance() {
    return _instance;
}

void Mode3::set_instance(ModeSettingAndState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Mode3.cpp
*********************************************************************/
