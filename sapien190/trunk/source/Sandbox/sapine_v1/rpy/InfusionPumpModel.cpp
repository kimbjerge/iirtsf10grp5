/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: InfusionPumpModel
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/InfusionPumpModel.cpp
*********************************************************************/

//## auto_generated
#include "InfusionPumpModel.h"
//## operation Generate(SampleSet)
#include "SampleSet.h"
//## dependency Gain
#include "Gain.h"
//## auto_generated
#include "Medicine.h"
//## package Application::Continuous

//## class InfusionPumpModel
void InfusionPumpModel::FactoryFilter() {
    //#[ operation FactoryFilter()
    addItsFilter(getItsGain());
    addItsFilter(getItsECGMedicineAdjust());
    addItsFilter(getItsECGtoEDR());
    addItsFilter(getItsECGtoPulse());
    //#]
}

void InfusionPumpModel::Generate(SampleSet& sample) {
    //#[ operation Generate(SampleSet)
    itsGain.Output(sample, ECGSample); 
    itsECGMedicineAdjust.Output(ECGSample, ECGSample);
    itsECGtoEDR.Output(ECGSample, EDRSample);
    itsECGtoPulse.Output(ECGSample, PulseSample);
    //#]
}

InfusionPumpModel::~InfusionPumpModel() {
}

InfusionPumpModel::InfusionPumpModel() {
    //#[ operation InfusionPumpModel()
    FactoryFilter();
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/InfusionPumpModel.cpp
*********************************************************************/
