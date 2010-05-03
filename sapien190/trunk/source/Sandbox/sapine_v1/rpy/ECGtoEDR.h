/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ECGtoEDR
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ECGtoEDR.h
*********************************************************************/

#ifndef ECGtoEDR_H
#define ECGtoEDR_H

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
//## class ECGtoEDR
#include "Filter.h"
//## package Application::Continuous

//## class ECGtoEDR
class ECGtoEDR : public Filter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ECGtoEDR();
    
    //## auto_generated
    virtual ~ECGtoEDR();
    
    ////    Operations    ////
    
    //## operation output(float)
    virtual float output(float in);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ECGtoEDR.h
*********************************************************************/
