/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Parameter
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Parameter.h
*********************************************************************/

#ifndef Parameter_H
#define Parameter_H

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
//## dependency PatientModel
class PatientModel;

//## dependency PhysioModel
class PhysioModel;

//## dependency SimulatorRealtime
class SimulatorRealtime;

//## package Application::Continuous

//## class Parameter
class Parameter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Parameter();
    
    //## auto_generated
    virtual ~Parameter();
    
    ////    Operations    ////
    
    //## operation Execute(SimulatorRealtime*)
    virtual void Execute(SimulatorRealtime* ps) = 0;
    
    //## operation GetPhysioModel(SimulatorRealtime*)
    PhysioModel* GetPhysioModel(SimulatorRealtime* ps);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Parameter.h
*********************************************************************/
