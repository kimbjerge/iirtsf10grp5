/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Filter
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Filter.h
*********************************************************************/

#ifndef Filter_H
#define Filter_H

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
#include "Continuous.h"
//## package Application::Continuous

//## class Filter
class Filter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Filter();
    
    //## auto_generated
    virtual ~Filter() = 0;
    
    ////    Operations    ////
    
    //## operation output(float)
    virtual float output(float in) = 0;
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Filter.h
*********************************************************************/
