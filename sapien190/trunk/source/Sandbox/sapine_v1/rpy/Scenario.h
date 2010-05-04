/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Scenario
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Scenario.h
*********************************************************************/

#ifndef Scenario_H
#define Scenario_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "wfdb/wfdb.h"
//## link itsController
class Controller;

//## link itsScenarioConfig
class ScenarioConfig;

//## package Application::Discrete

//## class Scenario
class Scenario {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Scenario();
    
    //## auto_generated
    ~Scenario();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    ScenarioConfig* getItsScenarioConfig() const;
    
    //## auto_generated
    void setItsScenarioConfig(ScenarioConfig* p_ScenarioConfig);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    ScenarioConfig* itsScenarioConfig;		//## link itsScenarioConfig
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
    
    //## auto_generated
    void __setItsScenarioConfig(ScenarioConfig* p_ScenarioConfig);
    
    //## auto_generated
    void _setItsScenarioConfig(ScenarioConfig* p_ScenarioConfig);
    
    //## auto_generated
    void _clearItsScenarioConfig();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Scenario.h
*********************************************************************/