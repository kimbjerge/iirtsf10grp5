/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RateParam
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RateParam.h
*********************************************************************/

#ifndef RateParam_H
#define RateParam_H

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
//## class RateParam
#include "Parameter.h"
//## dependency PatientModel
class PatientModel;

//## dependency PhysioModel
class PhysioModel;

//## dependency SimulatorRealtime
class SimulatorRealtime;

//## package Application::Continuous

//## class RateParam
class RateParam : public Parameter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RateParam();
    
    //## auto_generated
    virtual ~RateParam();
    
    ////    Operations    ////
    
    //## operation Execute(SimulatorRealtime*)
    virtual void Execute(SimulatorRealtime* ps);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getRate() const;
    
    //## auto_generated
    void setRate(int p_rate);
    
    ////    Attributes    ////

protected :

    int rate;		//## attribute rate
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RateParam.h
*********************************************************************/
