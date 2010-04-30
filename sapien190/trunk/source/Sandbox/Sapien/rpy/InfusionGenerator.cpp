/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: InfusionGenerator
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/InfusionGenerator.cpp
*********************************************************************/

//## auto_generated
#include "InfusionGenerator.h"
//## dependency ECGCalculate
#include "ECGCalculate.h"
//## package Application::Continuous

//## class InfusionGenerator
InfusionGenerator::InfusionGenerator() {
}

InfusionGenerator::~InfusionGenerator() {
}

void InfusionGenerator::factoryCalculate() {
    //#[ operation factoryCalculate()
    addItsFilter(getItsInfECGCalculate());
    addItsFilter(getItsEDRCalculate());
    addItsFilter(getItsPulseCalculate());
    //#]
}

EDRCalculate* InfusionGenerator::getItsEDRCalculate() const {
    return (EDRCalculate*) &itsEDRCalculate;
}

InfECGCalculate* InfusionGenerator::getItsInfECGCalculate() const {
    return (InfECGCalculate*) &itsInfECGCalculate;
}

PulseCalculate* InfusionGenerator::getItsPulseCalculate() const {
    return (PulseCalculate*) &itsPulseCalculate;
}

void InfusionGenerator::Generate(SampleType sample) {
    //#[ operation Generate(SampleType)
    ECGSample = itsInfECGCalculate.output(int2float(sample));
    EDRSample = itsEDRCalculate.output(ECGSample);
    PulseSample = itsPulseCalculate.output(ECGSample);
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/InfusionGenerator.cpp
*********************************************************************/
