/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: NormalGenerator
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/NormalGenerator.cpp
*********************************************************************/

//## auto_generated
#include "NormalGenerator.h"
//## package Application::Continuous

//## class NormalGenerator
NormalGenerator::NormalGenerator() {
}

NormalGenerator::~NormalGenerator() {
}

void NormalGenerator::factoryCalculate() {
    //#[ operation factoryCalculate()
    addItsFilter(getItsECGCalculate());
    addItsFilter(getItsEDRCalculate());
    addItsFilter(getItsPulseCalculate());
    //#]
}

ECGCalculate* NormalGenerator::getItsECGCalculate() const {
    return (ECGCalculate*) &itsECGCalculate;
}

EDRCalculate* NormalGenerator::getItsEDRCalculate() const {
    return (EDRCalculate*) &itsEDRCalculate;
}

PulseCalculate* NormalGenerator::getItsPulseCalculate() const {
    return (PulseCalculate*) &itsPulseCalculate;
}

void NormalGenerator::Generate(SampleType sample) {
    //#[ operation Generate(SampleType)
    ECGSample = itsECGCalculate.output(int2float(sample));
    EDRSample = itsEDRCalculate.output(ECGSample);
    PulseSample = itsPulseCalculate.output(ECGSample);
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/NormalGenerator.cpp
*********************************************************************/
