/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: InfECGCalculate
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/InfECGCalculate.h
*********************************************************************/

#ifndef InfECGCalculate_H
#define InfECGCalculate_H

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
//## class InfECGCalculate
#include "Filter.h"
//## package Application::Continuous

//## class InfECGCalculate
class InfECGCalculate : public Filter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    InfECGCalculate();
    
    //## auto_generated
    virtual ~InfECGCalculate();
    
    ////    Operations    ////
    
    //## operation output(float)
    virtual float output(float in);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/InfECGCalculate.h
*********************************************************************/
