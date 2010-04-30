/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: LCDScreen
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/LCDScreen.h
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
//## class LCDScreen
#include "Observer.h"
//## link itsController
class Controller;

//## link itsWaveform
class Waveform;

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
    Waveform* getItsWaveform() const;
    
    //## auto_generated
    void setItsWaveform(Waveform* p_Waveform);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    Waveform* itsWaveform;		//## link itsWaveform
    
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
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/LCDScreen.h
*********************************************************************/
