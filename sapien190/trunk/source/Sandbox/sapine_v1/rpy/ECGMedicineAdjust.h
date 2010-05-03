/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ECGMedicineAdjust
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ECGMedicineAdjust.h
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
#include "Continuous.h"
//## class ECGMedicineAdjust
#include "Filter.h"
//## link itsMedicine
class Medicine;

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
    
    //## operation output(float)
    virtual float output(float in);
    
    ////    Additional operations    ////
    
    //## auto_generated
    Medicine* getItsMedicine() const;
    
    //## auto_generated
    void setItsMedicine(Medicine* p_Medicine);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Medicine* itsMedicine;		//## link itsMedicine
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ECGMedicineAdjust.h
*********************************************************************/
