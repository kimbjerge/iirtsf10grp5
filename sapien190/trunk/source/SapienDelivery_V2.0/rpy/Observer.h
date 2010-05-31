/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Observer
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Observer.h
*********************************************************************/

#ifndef Observer_H
#define Observer_H

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
//## operation Update(FrameBuffer*)
class FrameBuffer;

//## package Application::Discrete

//## class Observer
class Observer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Observer();
    
    //## auto_generated
    virtual ~Observer() = 0;
    
    ////    Operations    ////
    
    //## operation Update(FrameBuffer*)
    virtual void Update(FrameBuffer* fp) = 0;
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Observer.h
*********************************************************************/
