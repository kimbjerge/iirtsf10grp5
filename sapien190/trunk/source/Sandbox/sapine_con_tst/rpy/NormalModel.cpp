/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: NormalModel
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/NormalModel.cpp
*********************************************************************/

//## auto_generated
#include "NormalModel.h"
//## operation Generate(SampleSet)
#include "SampleSet.h"
//## auto_generated
#include "Medicine.h"
//## package Application::Continuous

//## class NormalModel
void NormalModel::FactoryFilter() {
    //#[ operation FactoryFilter()
    addItsFilter(getItsGain());
    addItsFilter(getItsECGtoEDR());
    addItsFilter(getItsECGtoPulse());
    //#]
}

void NormalModel::Generate(SampleSet& sample) {
    //#[ operation Generate(SampleSet)
    itsGain.Output(sample, ECGSample);
    itsECGtoEDR.Output(ECGSample, EDRSample);
    itsECGtoPulse.Output(ECGSample, PulseSample);
    //#]
}

NormalModel::~NormalModel() {
}

NormalModel::NormalModel() {
    //#[ operation NormalModel()
    FactoryFilter();
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/NormalModel.cpp
*********************************************************************/
