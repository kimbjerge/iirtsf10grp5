/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ScenarioConfig
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ScenarioConfig.h
*********************************************************************/

#ifndef ScenarioConfig_H
#define ScenarioConfig_H

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
//## link itsScenario
class Scenario;

//## package Application::Discrete

//## class ScenarioConfig
class ScenarioConfig {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ScenarioConfig();
    
    //## auto_generated
    ~ScenarioConfig();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Scenario* getItsScenario() const;
    
    //## auto_generated
    void setItsScenario(Scenario* p_Scenario);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Scenario* itsScenario;		//## link itsScenario
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsScenario(Scenario* p_Scenario);
    
    //## auto_generated
    void _setItsScenario(Scenario* p_Scenario);
    
    //## auto_generated
    void _clearItsScenario();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ScenarioConfig.h
*********************************************************************/
