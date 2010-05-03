/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: InfusionPumpModel
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/InfusionPumpModel.cpp
*********************************************************************/

//## auto_generated
#include "InfusionPumpModel.h"
//## dependency Gain
#include "Gain.h"
//## package Application::Continuous

//## class InfusionPumpModel
void InfusionPumpModel::factoryCalculate() {
    //#[ operation factoryCalculate()
    addItsFilter(getItsInfECGCalculate());
    addItsFilter(getItsEDRCalculate());
    addItsFilter(getItsPulseCalculate());
    //#]
}

ECGtoEDR* InfusionPumpModel::getItsEDRCalculate() const {
    return (ECGtoEDR*) &itsEDRCalculate;
}

ECGMedicineAdjust* InfusionPumpModel::getItsInfECGCalculate() const {
    return (ECGMedicineAdjust*) &itsInfECGCalculate;
}

ECGtoPulse* InfusionPumpModel::getItsPulseCalculate() const {
    return (ECGtoPulse*) &itsPulseCalculate;
}

void InfusionPumpModel::Generate(SampleType sample) {
    //#[ operation Generate(SampleType)
    ECGSample = itsInfECGCalculate.output(int2float(sample));
    EDRSample = itsEDRCalculate.output(ECGSample);
    PulseSample = itsPulseCalculate.output(ECGSample);
    //#]
}

InfusionPumpModel::InfusionPumpModel() {
}

InfusionPumpModel::~InfusionPumpModel() {
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/InfusionPumpModel.cpp
*********************************************************************/
