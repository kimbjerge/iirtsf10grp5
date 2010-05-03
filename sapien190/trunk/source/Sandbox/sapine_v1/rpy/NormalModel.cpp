/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: NormalModel
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/NormalModel.cpp
*********************************************************************/

//## auto_generated
#include "NormalModel.h"
//## package Application::Continuous

//## class NormalModel
void NormalModel::factoryCalculate() {
    //#[ operation factoryCalculate()
    addItsFilter(getItsECGCalculate());
    addItsFilter(getItsEDRCalculate());
    addItsFilter(getItsPulseCalculate());
    //#]
}

Gain* NormalModel::getItsECGCalculate() const {
    return (Gain*) &itsECGCalculate;
}

ECGtoEDR* NormalModel::getItsEDRCalculate() const {
    return (ECGtoEDR*) &itsEDRCalculate;
}

ECGtoPulse* NormalModel::getItsPulseCalculate() const {
    return (ECGtoPulse*) &itsPulseCalculate;
}

void NormalModel::Generate(SampleType sample) {
    //#[ operation Generate(SampleType)
    ECGSample = itsECGCalculate.output(int2float(sample));
    EDRSample = itsEDRCalculate.output(ECGSample);
    PulseSample = itsPulseCalculate.output(ECGSample);
    //#]
}

NormalModel::NormalModel() {
}

NormalModel::~NormalModel() {
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/NormalModel.cpp
*********************************************************************/
