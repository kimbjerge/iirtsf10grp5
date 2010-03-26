/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: SimulatorTask
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SimulatorTask.h
*********************************************************************/

#ifndef SimulatorTask_H
#define SimulatorTask_H

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
#include "Continuous.h"
//## class SimulatorTask
#include "Thread.h"
//## dependency Event
class Event;

//## dependency EventX
class EventX;

//## dependency EventY
class EventY;

//## operation SimulatorTask(RealTimeThread*)
class RealTimeThread;

//## package Application::Continuous

//## class SimulatorTask
class SimulatorTask : public Thread {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :
    
    //## auto_generated
    virtual ~SimulatorTask();
    
    ////    Operations    ////
    
    //## operation run()
    virtual void run();
    
    ////    Additional operations    ////
    
    //## auto_generated
    RealTimeThread* getItsRealTimeThread() const;
    
    //## auto_generated
    void setItsRealTimeThread(RealTimeThread* p_RealTimeThread);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    RealTimeThread* itsRealTimeThread;		//## link itsRealTimeThread

public :

    //## operation SimulatorTask(RealTimeThread*)
    SimulatorTask(RealTimeThread* rtt);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SimulatorTask.h
*********************************************************************/
