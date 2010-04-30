/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: EDRCalculate
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/EDRCalculate.h
*********************************************************************/

#ifndef EDRCalculate_H
#define EDRCalculate_H

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
//## class EDRCalculate
#include "Filter.h"
//## package Application::Continuous

//## class EDRCalculate
class EDRCalculate : public Filter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EDRCalculate();
    
    //## auto_generated
    virtual ~EDRCalculate();
    
    ////    Operations    ////
    
    //## operation output(float)
    virtual float output(float in);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/EDRCalculate.h
*********************************************************************/
