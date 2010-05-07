/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: LCDScreen
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/LCDScreen.cpp
*********************************************************************/

//## auto_generated
#include "LCDScreen.h"
//## link itsController
#include "Controller.h"
//## link itsDistributerThread
#include "DistributerThread.h"
//## operation Update(FrameBuffer*)
#include "FrameBuffer.h"
//## package Application::GUI

//## class LCDScreen
LCDScreen::LCDScreen() {
    itsController = NULL;
    itsDistributerThread = NULL;
}

LCDScreen::~LCDScreen() {
    cleanUpRelations();
}

void LCDScreen::Update(FrameBuffer* fp) {
    //#[ operation Update(FrameBuffer*)
    std::cout << "FrameBuffer Update" << std::endl;
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

DistributerThread* LCDScreen::getItsDistributerThread() const {
    return itsDistributerThread;
}

void LCDScreen::setItsDistributerThread(DistributerThread* p_DistributerThread) {
    itsDistributerThread = p_DistributerThread;
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
    if(itsDistributerThread != NULL)
        {
            itsDistributerThread = NULL;
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
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/LCDScreen.cpp
*********************************************************************/
