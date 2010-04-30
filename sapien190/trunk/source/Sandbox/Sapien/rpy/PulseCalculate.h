/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: PulseCalculate
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/PulseCalculate.h
*********************************************************************/

#ifndef PulseCalculate_H
#define PulseCalculate_H

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
//## class PulseCalculate
#include "Filter.h"
//## package Application::Continuous

//## class PulseCalculate
class PulseCalculate : public Filter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    PulseCalculate();
    
    //## auto_generated
    virtual ~PulseCalculate();
    
    ////    Operations    ////
    
    //## operation output(float)
    virtual float output(float in);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/PulseCalculate.h
*********************************************************************/
