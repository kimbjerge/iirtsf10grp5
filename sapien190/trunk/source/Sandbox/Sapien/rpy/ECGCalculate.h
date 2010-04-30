/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ECGCalculate
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ECGCalculate.h
*********************************************************************/

#ifndef ECGCalculate_H
#define ECGCalculate_H

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
//## class ECGCalculate
#include "Filter.h"
//## package Application::Continuous

//## class ECGCalculate
class ECGCalculate : public Filter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ECGCalculate();
    
    //## auto_generated
    virtual ~ECGCalculate();
    
    ////    Operations    ////
    
    //## operation output(float)
    virtual float output(float in);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ECGCalculate.h
*********************************************************************/
