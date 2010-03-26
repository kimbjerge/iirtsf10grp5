/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: SimulatorTask
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SimulatorTask.cpp
*********************************************************************/

//## auto_generated
#include "SimulatorTask.h"
//## operation SimulatorTask(RealTimeThread*)
#include "RealTimeThread.h"
//## dependency Event
#include "Event.h"
//## dependency EventX
#include "EventX.h"
//## dependency EventY
#include "EventY.h"
//## package Application::Continuous

SimulatorTask::~SimulatorTask() {
    cleanUpRelations();
}

void SimulatorTask::run() {
    //#[ operation run()
    Event *eventStim;
    while(isAlive()){
    #ifdef _LINUX
        float val;
    	val = rand();
        if (val > 1000000000)
        	eventStim = new EventX();
        else
        	eventStim = new EventY();
    
    	itsRealTimeThread->getMailBox()->put(eventStim);
    	sleep(1);
    #endif
    }
    //#]
}

RealTimeThread* SimulatorTask::getItsRealTimeThread() const {
    return itsRealTimeThread;
}

void SimulatorTask::setItsRealTimeThread(RealTimeThread* p_RealTimeThread) {
    itsRealTimeThread = p_RealTimeThread;
}

void SimulatorTask::cleanUpRelations() {
    if(itsRealTimeThread != NULL)
        {
            itsRealTimeThread = NULL;
        }
}

SimulatorTask::SimulatorTask(RealTimeThread* rtt) : Thread(PRIORITY_NORMAL,"SimulatorThread") {
    itsRealTimeThread = NULL;
    //#[ operation SimulatorTask(RealTimeThread*)
    itsRealTimeThread = rtt;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/SimulatorTask.cpp
*********************************************************************/
