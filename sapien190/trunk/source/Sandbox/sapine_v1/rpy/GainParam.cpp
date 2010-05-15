/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: GainParam
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/GainParam.cpp
*********************************************************************/

//## auto_generated
#include "GainParam.h"
//## dependency PatientModel
#include "PatientModel.h"
//## dependency PhysioModel
#include "PhysioModel.h"
//## dependency SimulatorRealtime
#include "SimulatorRealtime.h"
//## dependency SimulatorRealtime
class SimulatorRealtime;

//## dependency PatientModel
class PatientModel;

//## dependency PhysioModel
class PhysioModel;

//## package Application::Continuous

//## class GainParam
GainParam::GainParam() {
}

GainParam::~GainParam() {
}

void GainParam::Execute(SimulatorRealtime* ps) {
    //#[ operation Execute(SimulatorRealtime*)
    PhysioModel *pPhysioModel = GetPhysioModel(ps);
    if (pPhysioModel != NULL)
     	pPhysioModel->getItsGain()->setGain(gain);
    //#]
}

float GainParam::getGain() const {
    return gain;
}

void GainParam::setGain(float p_gain) {
    gain = p_gain;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/GainParam.cpp
*********************************************************************/
