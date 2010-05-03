/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: LCDScreen
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/LCDScreen.cpp
*********************************************************************/

//## auto_generated
#include "LCDScreen.h"
//## link itsController
#include "Controller.h"
//## link itsSignalDistributer
#include "SignalDistributer.h"
//## package Application::GUI

//## class LCDScreen
LCDScreen::LCDScreen() {
    itsController = NULL;
    itsSignalDistributer = NULL;
}

LCDScreen::~LCDScreen() {
    cleanUpRelations();
}

void LCDScreen::Update() {
    //#[ operation Update()
    //#]
}

Controller* LCDScreen::getItsController() const {
    return itsController;
}

void LCDScreen::setItsController(Controller* p_Controller) {
    if(p_Controller != NULL)
        {
            p_Controller->_setItsLCDScreen(this);
        }
    _setItsController(p_Controller);
}

SignalDistributer* LCDScreen::getItsSignalDistributer() const {
    return itsSignalDistributer;
}

void LCDScreen::setItsSignalDistributer(SignalDistributer* p_SignalDistributer) {
    itsSignalDistributer = p_SignalDistributer;
}

void LCDScreen::cleanUpRelations() {
    if(itsController != NULL)
        {
            LCDScreen* p_LCDScreen = itsController->getItsLCDScreen();
            if(p_LCDScreen != NULL)
                {
                    itsController->__setItsLCDScreen(NULL);
                }
            itsController = NULL;
        }
    if(itsSignalDistributer != NULL)
        {
            itsSignalDistributer = NULL;
        }
}

void LCDScreen::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
}

void LCDScreen::_setItsController(Controller* p_Controller) {
    if(itsController != NULL)
        {
            itsController->__setItsLCDScreen(NULL);
        }
    __setItsController(p_Controller);
}

void LCDScreen::_clearItsController() {
    itsController = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/LCDScreen.cpp
*********************************************************************/
