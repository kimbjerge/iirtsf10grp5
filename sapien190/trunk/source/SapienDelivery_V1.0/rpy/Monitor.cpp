/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Monitor
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Monitor.cpp
*********************************************************************/

//## auto_generated
#include "Monitor.h"
//## package Application

//## class Monitor
Monitor::Monitor() {
}

Monitor::~Monitor() {
}

void Monitor::enter() {
    //#[ operation enter()
    lock.wait();
    //#]
}

void Monitor::exit() {
    //#[ operation exit()
    lock.signal();
    //#]
}

Mutex* Monitor::getLock() const {
    return (Mutex*) &lock;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Monitor.cpp
*********************************************************************/
