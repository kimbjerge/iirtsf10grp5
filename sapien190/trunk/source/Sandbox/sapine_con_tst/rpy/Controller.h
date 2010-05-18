/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Controller
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

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
//## auto_generated
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## link itsLCDScreen
class LCDScreen;

//## dependency Parameter
class Parameter;

//## link itsScenario
class Scenario;

//## link itsSimulatorRealtime
class SimulatorRealtime;

//## package Application::Discrete

//## class Controller
class Controller {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Controller();
    
    //## auto_generated
    ~Controller();
    
    ////    Additional operations    ////
    
    //## auto_generated
    LCDScreen* getItsLCDScreen() const;
    
    //## auto_generated
    void setItsLCDScreen(LCDScreen* p_LCDScreen);
    
    //## auto_generated
    Scenario* getItsScenario() const;
    
    //## auto_generated
    void setItsScenario(Scenario* p_Scenario);
    
    //## auto_generated
    SimulatorRealtime* getItsSimulatorRealtime() const;
    
    //## auto_generated
    void setItsSimulatorRealtime(SimulatorRealtime* p_SimulatorRealtime);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    LCDScreen* itsLCDScreen;		//## link itsLCDScreen
    
    Scenario* itsScenario;		//## link itsScenario
    
    SimulatorRealtime* itsSimulatorRealtime;		//## link itsSimulatorRealtime
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsLCDScreen(LCDScreen* p_LCDScreen);
    
    //## auto_generated
    void _setItsLCDScreen(LCDScreen* p_LCDScreen);
    
    //## auto_generated
    void _clearItsLCDScreen();
    
    //## auto_generated
    void __setItsScenario(Scenario* p_Scenario);
    
    //## auto_generated
    void _setItsScenario(Scenario* p_Scenario);
    
    //## auto_generated
    void _clearItsScenario();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Controller.h
*********************************************************************/
