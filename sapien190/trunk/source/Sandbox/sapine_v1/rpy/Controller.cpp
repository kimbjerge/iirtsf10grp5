/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Controller
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Controller.cpp
*********************************************************************/

//## auto_generated
#include "Controller.h"
//## link itsLCDScreen
#include "LCDScreen.h"
//## link itsParameter
#include "Parameter.h"
//## link itsPatientModel
#include "PatientModel.h"
//## link itsScenario
#include "Scenario.h"
//## package Application::Discrete

//## class Controller
Controller::Controller() {
    itsLCDScreen = NULL;
    itsParameter = NULL;
    itsPatientModel = NULL;
    itsScenario = NULL;
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

Parameter* Controller::getItsParameter() const {
    return itsParameter;
}

void Controller::setItsParameter(Parameter* p_Parameter) {
    if(p_Parameter != NULL)
        {
            p_Parameter->_setItsController(this);
        }
    _setItsParameter(p_Parameter);
}

PatientModel* Controller::getItsPatientModel() const {
    return itsPatientModel;
}

void Controller::setItsPatientModel(PatientModel* p_PatientModel) {
    itsPatientModel = p_PatientModel;
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
    if(itsParameter != NULL)
        {
            Controller* p_Controller = itsParameter->getItsController();
            if(p_Controller != NULL)
                {
                    itsParameter->__setItsController(NULL);
                }
            itsParameter = NULL;
        }
    if(itsPatientModel != NULL)
        {
            itsPatientModel = NULL;
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

void Controller::__setItsParameter(Parameter* p_Parameter) {
    itsParameter = p_Parameter;
}

void Controller::_setItsParameter(Parameter* p_Parameter) {
    if(itsParameter != NULL)
        {
            itsParameter->__setItsController(NULL);
        }
    __setItsParameter(p_Parameter);
}

void Controller::_clearItsParameter() {
    itsParameter = NULL;
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
