/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RateParam
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RateParam.cpp
*********************************************************************/

//## auto_generated
#include "RateParam.h"
//## dependency PatientModel
#include "PatientModel.h"
//## dependency PhysioModel
#include "PhysioModel.h"
//## dependency SimulatorRealtime
#include "SimulatorRealtime.h"
//## package Application::Continuous

//## class RateParam
RateParam::RateParam() {
}

RateParam::~RateParam() {
}

void RateParam::Execute(SimulatorRealtime* ps) {
    //#[ operation Execute(SimulatorRealtime*)
    ps->SetSampleRate(rate);
    //#]
}

int RateParam::getRate() const {
    return rate;
}

void RateParam::setRate(int p_rate) {
    rate = p_rate;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RateParam.cpp
*********************************************************************/
