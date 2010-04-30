/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: LCDScreen
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/LCDScreen.cpp
*********************************************************************/

//## auto_generated
#include "LCDScreen.h"
//## link itsController
#include "Controller.h"
//## link itsWaveform
#include "Waveform.h"
//## package Application::GUI

//## class LCDScreen
LCDScreen::LCDScreen() {
    itsController = NULL;
    itsWaveform = NULL;
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

Waveform* LCDScreen::getItsWaveform() const {
    return itsWaveform;
}

void LCDScreen::setItsWaveform(Waveform* p_Waveform) {
    itsWaveform = p_Waveform;
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
    if(itsWaveform != NULL)
        {
            itsWaveform = NULL;
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
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/LCDScreen.cpp
*********************************************************************/
