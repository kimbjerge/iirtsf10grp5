/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Parameter
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Parameter.cpp
*********************************************************************/

//## auto_generated
#include "Parameter.h"
//## dependency PatientModel
#include "PatientModel.h"
//## dependency PhysioModel
#include "PhysioModel.h"
//## dependency SimulatorRealtime
#include "SimulatorRealtime.h"
//## package Application::Continuous

//## class Parameter
Parameter::Parameter() {
}

Parameter::~Parameter() {
}

PhysioModel* Parameter::GetPhysioModel(SimulatorRealtime* ps) {
    //#[ operation GetPhysioModel(SimulatorRealtime*)
    PatientModel *pm = ps->getItsPatientModel(); 
    if (pm != NULL)
       return pm->getItsPhysioModel(); 
    else
       return NULL;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Parameter.cpp
*********************************************************************/
