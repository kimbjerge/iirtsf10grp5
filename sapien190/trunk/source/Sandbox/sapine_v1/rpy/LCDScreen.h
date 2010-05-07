/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: LCDScreen
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/LCDScreen.h
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
//## auto_generated
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## class LCDScreen
#include "Observer.h"
//## link itsController
class Controller;

//## link itsDistributerThread
class DistributerThread;

//## operation Update(FrameBuffer*)
class FrameBuffer;

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
    
    //## operation Update(FrameBuffer*)
    virtual void Update(FrameBuffer* fp);
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    DistributerThread* getItsDistributerThread() const;
    
    //## auto_generated
    void setItsDistributerThread(DistributerThread* p_DistributerThread);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    DistributerThread* itsDistributerThread;		//## link itsDistributerThread
    
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
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/LCDScreen.h
*********************************************************************/
