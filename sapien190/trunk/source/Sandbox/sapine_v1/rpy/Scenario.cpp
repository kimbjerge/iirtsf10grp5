/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Scenario
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Scenario.cpp
*********************************************************************/

//## auto_generated
#include "Scenario.h"
//## link itsController
#include "Controller.h"
//## link itsScenarioConfig
#include "ScenarioConfig.h"
//## package Application::Discrete

//## class Scenario
Scenario::Scenario() {
    itsController = NULL;
    itsScenarioConfig = NULL;
}

Scenario::~Scenario() {
    cleanUpRelations();
}

Controller* Scenario::getItsController() const {
    return itsController;
}

void Scenario::setItsController(Controller* p_Controller) {
    if(p_Controller != NULL)
        {
            p_Controller->_setItsScenario(this);
        }
    _setItsController(p_Controller);
}

ScenarioConfig* Scenario::getItsScenarioConfig() const {
    return itsScenarioConfig;
}

void Scenario::setItsScenarioConfig(ScenarioConfig* p_ScenarioConfig) {
    if(p_ScenarioConfig != NULL)
        {
            p_ScenarioConfig->_setItsScenario(this);
        }
    _setItsScenarioConfig(p_ScenarioConfig);
}

void Scenario::cleanUpRelations() {
    if(itsController != NULL)
        {
            Scenario* p_Scenario = itsController->getItsScenario();
            if(p_Scenario != NULL)
                {
                    itsController->__setItsScenario(NULL);
                }
            itsController = NULL;
        }
    if(itsScenarioConfig != NULL)
        {
            Scenario* p_Scenario = itsScenarioConfig->getItsScenario();
            if(p_Scenario != NULL)
                {
                    itsScenarioConfig->__setItsScenario(NULL);
                }
            itsScenarioConfig = NULL;
        }
}

void Scenario::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
}

void Scenario::_setItsController(Controller* p_Controller) {
    if(itsController != NULL)
        {
            itsController->__setItsScenario(NULL);
        }
    __setItsController(p_Controller);
}

void Scenario::_clearItsController() {
    itsController = NULL;
}

void Scenario::__setItsScenarioConfig(ScenarioConfig* p_ScenarioConfig) {
    itsScenarioConfig = p_ScenarioConfig;
}

void Scenario::_setItsScenarioConfig(ScenarioConfig* p_ScenarioConfig) {
    if(itsScenarioConfig != NULL)
        {
            itsScenarioConfig->__setItsScenario(NULL);
        }
    __setItsScenarioConfig(p_ScenarioConfig);
}

void Scenario::_clearItsScenarioConfig() {
    itsScenarioConfig = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Scenario.cpp
*********************************************************************/
