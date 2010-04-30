/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ScenarioConfig
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ScenarioConfig.cpp
*********************************************************************/

//## auto_generated
#include "ScenarioConfig.h"
//## link itsScenario
#include "Scenario.h"
//## package Application::Discrete

//## class ScenarioConfig
ScenarioConfig::ScenarioConfig() {
    itsScenario = NULL;
}

ScenarioConfig::~ScenarioConfig() {
    cleanUpRelations();
}

Scenario* ScenarioConfig::getItsScenario() const {
    return itsScenario;
}

void ScenarioConfig::setItsScenario(Scenario* p_Scenario) {
    if(p_Scenario != NULL)
        {
            p_Scenario->_setItsScenarioConfig(this);
        }
    _setItsScenario(p_Scenario);
}

void ScenarioConfig::cleanUpRelations() {
    if(itsScenario != NULL)
        {
            ScenarioConfig* p_ScenarioConfig = itsScenario->getItsScenarioConfig();
            if(p_ScenarioConfig != NULL)
                {
                    itsScenario->__setItsScenarioConfig(NULL);
                }
            itsScenario = NULL;
        }
}

void ScenarioConfig::__setItsScenario(Scenario* p_Scenario) {
    itsScenario = p_Scenario;
}

void ScenarioConfig::_setItsScenario(Scenario* p_Scenario) {
    if(itsScenario != NULL)
        {
            itsScenario->__setItsScenarioConfig(NULL);
        }
    __setItsScenario(p_Scenario);
}

void ScenarioConfig::_clearItsScenario() {
    itsScenario = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ScenarioConfig.cpp
*********************************************************************/
