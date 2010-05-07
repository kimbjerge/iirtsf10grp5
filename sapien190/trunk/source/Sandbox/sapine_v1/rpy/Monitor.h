/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Monitor
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Monitor.h
*********************************************************************/

#ifndef Monitor_H
#define Monitor_H

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
//## attribute lock
#include "Mutex.h"
//## package Application

//## class Monitor
class Monitor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Monitor();
    
    //## auto_generated
    ~Monitor();
    
    ////    Operations    ////

protected :

    //## operation enter()
    void enter();
    
    //## operation exit()
    void exit();
    
    ////    Additional operations    ////

private :

    //## auto_generated
    Mutex* getLock() const;
    
    ////    Attributes    ////

protected :

    Mutex lock;		//## attribute lock
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Monitor.h
*********************************************************************/
