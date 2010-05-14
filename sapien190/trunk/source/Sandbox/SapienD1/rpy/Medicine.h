/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Medicine
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Medicine.h
*********************************************************************/

#ifndef Medicine_H
#define Medicine_H

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
//## auto_generated
#include "Continuous.h"
//## operation Medicine(MEDICINE_TYPES)
#include "SimulatorRealtime.h"
//## operation Medicine(MEDICINE_TYPES)
class SimulatorRealtime;

//## package Application::Continuous

//## class Medicine
class Medicine {
    ////    Constructors and destructors    ////
    
public :

    //## operation Medicine(MEDICINE_TYPES)
    Medicine(const SimulatorRealtime::MEDICINE_TYPES& tp);
    
    //## auto_generated
    Medicine();
    
    //## auto_generated
    ~Medicine();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getAmount() const;
    
    //## auto_generated
    void setAmount(int p_amount);
    
    //## auto_generated
    SimulatorRealtime::MEDICINE_TYPES getType() const;
    
    //## auto_generated
    void setType(SimulatorRealtime::MEDICINE_TYPES p_type);
    
    ////    Attributes    ////

protected :

    int amount;		//## attribute amount
    
    SimulatorRealtime::MEDICINE_TYPES type;		//## attribute type
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Medicine.h
*********************************************************************/
