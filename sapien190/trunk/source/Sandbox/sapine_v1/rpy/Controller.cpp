/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Controller
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Controller.cpp
*********************************************************************/

//## auto_generated
#include "Controller.h"
//## link itsLCDScreen
#include "LCDScreen.h"
//## dependency Parameter
#include "Parameter.h"
//## link itsScenario
#include "Scenario.h"
//## link itsSimulatorRealtime
#include "SimulatorRealtime.h"
//## package Application::Discrete

//## class Controller
Controller::Controller() {
    itsLCDScreen = NULL;
    itsScenario = NULL;
    itsSimulatorRealtime = NULL;
}

Controller::~Controller() {
    cleanUpRelations();
}

LCDScreen* Controller::getItsLCDScreen() const {
    return itsLCDScreen;
}

void Controller::setItsLCDScreen(LCDScreen* p_LCDScreen) {
    if(p_LCDScreen != NULL)
        {
            p_LCDScreen->_setItsController(this);
        }
    _setItsLCDScreen(p_LCDScreen);
}

Scenario* Controller::getItsScenario() const {
    return itsScenario;
}

void Controller::setItsScenario(Scenario* p_Scenario) {
    if(p_Scenario != NULL)
        {
            p_Scenario->_setItsController(this);
        }
    _setItsScenario(p_Scenario);
}

SimulatorRealtime* Controller::getItsSimulatorRealtime() const {
    return itsSimulatorRealtime;
}

void Controller::setItsSimulatorRealtime(SimulatorRealtime* p_SimulatorRealtime) {
    itsSimulatorRealtime = p_SimulatorRealtime;
}

void Controller::cleanUpRelations() {
    if(itsLCDScreen != NULL)
        {
            Controller* p_Controller = itsLCDScreen->getItsController();
            if(p_Controller != NULL)
                {
                    itsLCDScreen->__setItsController(NULL);
                }
            itsLCDScreen = NULL;
        }
    if(itsScenario != NULL)
        {
            Controller* p_Controller = itsScenario->getItsController();
            if(p_Controller != NULL)
                {
                    itsScenario->__setItsController(NULL);
                }
            itsScenario = NULL;
        }
    if(itsSimulatorRealtime != NULL)
        {
            itsSimulatorRealtime = NULL;
        }
}

void Controller::__setItsLCDScreen(LCDScreen* p_LCDScreen) {
    itsLCDScreen = p_LCDScreen;
}

void Controller::_setItsLCDScreen(LCDScreen* p_LCDScreen) {
    if(itsLCDScreen != NULL)
        {
            itsLCDScreen->__setItsController(NULL);
        }
    __setItsLCDScreen(p_LCDScreen);
}

void Controller::_clearItsLCDScreen() {
    itsLCDScreen = NULL;
}

void Controller::__setItsScenario(Scenario* p_Scenario) {
    itsScenario = p_Scenario;
}

void Controller::_setItsScenario(Scenario* p_Scenario) {
    if(itsScenario != NULL)
        {
            itsScenario->__setItsController(NULL);
        }
    __setItsScenario(p_Scenario);
}

void Controller::_clearItsScenario() {
    itsScenario = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Controller.cpp
*********************************************************************/
