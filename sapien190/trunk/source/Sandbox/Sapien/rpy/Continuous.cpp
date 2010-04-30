/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Continuous
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Continuous.cpp
*********************************************************************/

//## auto_generated
#include "Continuous.h"
//## classInstance itsECGCalculate
#include "ECGCalculate.h"
//## classInstance itsEDRCalculate
#include "EDRCalculate.h"
//## classInstance itsNormalGenerator
#include "NormalGenerator.h"
//## classInstance itsPulseCalculate
#include "PulseCalculate.h"
//## auto_generated
#include "Filter.h"
//## auto_generated
#include "Generator.h"
//## auto_generated
#include "InfECGCalculate.h"
//## auto_generated
#include "InfusionGenerator.h"
//## auto_generated
#include "Medicine.h"
//## auto_generated
#include "PatientModel.h"
//## auto_generated
#include "Record.h"
//## auto_generated
#include "RecordFile.h"
//## auto_generated
#include "RecordIterator.h"
//## auto_generated
#include "RecordProxy.h"
//## auto_generated
#include "RecordSimulate.h"
//## auto_generated
#include "RecordWfdb.h"

//## package Application::Continuous


void Continuous_initRelations() {
    itsNormalGenerator.addItsFilter(&itsECGCalculate);
    itsNormalGenerator.addItsFilter(&itsEDRCalculate);
    itsNormalGenerator.addItsFilter(&itsPulseCalculate);
}

//## classInstance itsECGCalculate
ECGCalculate itsECGCalculate;

//## classInstance itsEDRCalculate
EDRCalculate itsEDRCalculate;

//## classInstance itsNormalGenerator
NormalGenerator itsNormalGenerator;

//## classInstance itsPulseCalculate
PulseCalculate itsPulseCalculate;

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Continuous.cpp
*********************************************************************/
