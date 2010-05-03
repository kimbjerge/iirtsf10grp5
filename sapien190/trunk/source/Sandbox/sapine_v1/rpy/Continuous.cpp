/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Continuous
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Continuous.cpp
*********************************************************************/

//## auto_generated
#include "Continuous.h"
//## classInstance itsEDRCalculate
#include "ECGtoEDR.h"
//## classInstance itsPulseCalculate
#include "ECGtoPulse.h"
//## classInstance itsECGCalculate
#include "Gain.h"
//## classInstance itsNormalGenerator
#include "NormalModel.h"
//## auto_generated
#include "ConThread.h"
//## auto_generated
#include "ECGMedicineAdjust.h"
//## auto_generated
#include "Filter.h"
//## auto_generated
#include "FrameBuffer.h"
//## auto_generated
#include "InfusionPumpModel.h"
//## auto_generated
#include "Medicine.h"
//## auto_generated
#include "PatientModel.h"
//## auto_generated
#include "PhysioModel.h"
//## auto_generated
#include "Record.h"
//## auto_generated
#include "RecordIterator.h"
//## auto_generated
#include "RecordProxy.h"
//## auto_generated
#include "RecordSimulate.h"
//## auto_generated
#include "RecordWfdb.h"
//## auto_generated
#include "Sample.h"
//## auto_generated
#include "SampleSet.h"
//## auto_generated
#include "SignalDistributer.h"
//## auto_generated
#include "Subject.h"
//## package Application::Continuous


void Continuous_initRelations() {
    itsNormalGenerator.addItsFilter(&itsECGCalculate);
    itsNormalGenerator.addItsFilter(&itsEDRCalculate);
    itsNormalGenerator.addItsFilter(&itsPulseCalculate);
}

//## classInstance itsECGCalculate
Gain itsECGCalculate;

//## classInstance itsEDRCalculate
ECGtoEDR itsEDRCalculate;

//## classInstance itsNormalGenerator
NormalModel itsNormalGenerator;

//## classInstance itsPulseCalculate
ECGtoPulse itsPulseCalculate;

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Continuous.cpp
*********************************************************************/
