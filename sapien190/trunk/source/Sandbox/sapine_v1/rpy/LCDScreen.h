/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: LCDScreen
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/LCDScreen.h
*********************************************************************/

#ifndef LCDScreen_H
#define LCDScreen_H

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
//## class LCDScreen
#include "Observer.h"
//## link itsController
class Controller;

//## link itsSignalDistributer
class SignalDistributer;

//## package Application::GUI

//## class LCDScreen
class LCDScreen : public Observer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    LCDScreen();
    
    //## auto_generated
    virtual ~LCDScreen();
    
    ////    Operations    ////
    
    //## operation Update()
    virtual void Update();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    SignalDistributer* getItsSignalDistributer() const;
    
    //## auto_generated
    void setItsSignalDistributer(SignalDistributer* p_SignalDistributer);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    SignalDistributer* itsSignalDistributer;		//## link itsSignalDistributer
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/LCDScreen.h
*********************************************************************/
