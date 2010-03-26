/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Mode1
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Mode1.cpp
*********************************************************************/

//## auto_generated
#include "Mode1.h"
//## operation Instance(EmbeddedSystemX* )
#include "EmbeddedSystemX.h"
//## dependency Mode2
#include "Mode2.h"
//## operation chMode(RealTimeLoop*,EmbeddedSystemX*)
#include "RealTimeLoop.h"
//## package Application::Discrete

//## class Mode1
ModeSettingAndState* Mode1::_instance = 0;

Mode1::Mode1() {
}

Mode1::~Mode1() {
}

void Mode1::DisplayState() {
    //#[ operation DisplayState()
    Display("Mode1");
    //#]
}

ModeSettingAndState* Mode1::Instance(EmbeddedSystemX* esx) {
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

void Mode1::chMode(RealTimeLoop* rtl, EmbeddedSystemX* esx) {
    //#[ operation chMode(RealTimeLoop*,EmbeddedSystemX*)
    ChangeState(rtl, Mode2::Instance(esx));
    //#]
}

M1Strategy* Mode1::getItsM1Strategy() const {
    return (M1Strategy*) &itsM1Strategy;
}

ModeSettingAndState* Mode1::get_instance() {
    return _instance;
}

void Mode1::set_instance(ModeSettingAndState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Mode1.cpp
*********************************************************************/
