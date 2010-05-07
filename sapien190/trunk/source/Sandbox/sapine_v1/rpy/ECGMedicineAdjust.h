/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ECGMedicineAdjust
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ECGMedicineAdjust.h
*********************************************************************/

#ifndef ECGMedicineAdjust_H
#define ECGMedicineAdjust_H

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
#include "Continuous.h"
//## class ECGMedicineAdjust
#include "Filter.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## operation Output(SampleSet,SampleSet)
class SampleSet;

//## package Application::Continuous

//## class ECGMedicineAdjust
class ECGMedicineAdjust : public Filter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ECGMedicineAdjust();
    
    //## auto_generated
    virtual ~ECGMedicineAdjust();
    
    ////    Operations    ////
    
    //## operation Output(SampleSet,SampleSet)
    virtual int Output(SampleSet& in, SampleSet& out);
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ECGMedicineAdjust.h
*********************************************************************/
