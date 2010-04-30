/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Control
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Control.h
*********************************************************************/

#ifndef Control_H
#define Control_H

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
//## package Application

//## class Control
class Control {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Control();
    
    //## auto_generated
    virtual ~Control() = 0;
    
    ////    Operations    ////
    
    //## operation SetRecord()
    virtual void SetRecord() = 0;
    
    //## operation StartSimulation()
    virtual void StartSimulation() = 0;
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Control.h
*********************************************************************/
