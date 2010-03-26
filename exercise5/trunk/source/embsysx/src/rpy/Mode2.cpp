/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Mode2
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Mode2.cpp
*********************************************************************/

//## auto_generated
#include "Mode2.h"
//## operation Instance(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency Mode3
#include "Mode3.h"
//## operation chMode(RealTimeLoop*,EmbeddedSystemX*)
#include "RealTimeLoop.h"
//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## package Application::Discrete

//## class Mode2
ModeSettingAndState* Mode2::_instance = 0;

Mode2::Mode2() {
}

Mode2::~Mode2() {
}

ModeSettingAndState* Mode2::Instance(EmbeddedSystemX* esx) {
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

void Mode2::chMode(RealTimeLoop* rtl, EmbeddedSystemX* esx) {
    //#[ operation chMode(RealTimeLoop*,EmbeddedSystemX*)
    ChangeState(rtl, Mode3::Instance(esx));
    //#]
}

void Mode2::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode2");
    //#]
}

M2Strategy* Mode2::getItsM2Strategy() const {
    return (M2Strategy*) &itsM2Strategy;
}

ModeSettingAndState* Mode2::get_instance() {
    return _instance;
}

void Mode2::set_instance(ModeSettingAndState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Mode2.cpp
*********************************************************************/
