/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Continuous
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Continuous.h
*********************************************************************/

#ifndef Continuous_H
#define Continuous_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "wfdb/wfdb.h"
//## auto_generated
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## auto_generated
class DistributerThread;

//## auto_generated
class ECGMedicineAdjust;

//## classInstance itsEDRCalculate
class ECGtoEDR;

//## classInstance itsPulseCalculate
class ECGtoPulse;

//## auto_generated
class Filter;

//## auto_generated
class FrameBuffer;

//## auto_generated
class FrameBufferPool;

//## classInstance itsECGCalculate
class Gain;

//## auto_generated
class InfusionPumpModel;

//## auto_generated
class Medicine;

//## classInstance itsNormalGenerator
class NormalModel;

//## auto_generated
class PatientModel;

//## auto_generated
class PhysioModel;

//## auto_generated
class RealTimeThread;

//## auto_generated
class Record;

//## auto_generated
class RecordIterator;

//## auto_generated
class RecordProxy;

//## auto_generated
class RecordSimulate;

//## auto_generated
class RecordWfdb;

//## auto_generated
class Sample;

//## auto_generated
class SampleSet;

//## auto_generated
class SimulatorRealtime;

//## auto_generated
class Subject;

//## package Application::Continuous


//## type SampleType
typedef int SampleType;

//## auto_generated
void Continuous_initRelations();

//## classInstance itsECGCalculate
extern Gain itsECGCalculate;

//## classInstance itsEDRCalculate
extern ECGtoEDR itsEDRCalculate;

//## classInstance itsNormalGenerator
extern NormalModel itsNormalGenerator;

//## classInstance itsPulseCalculate
extern ECGtoPulse itsPulseCalculate;

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Continuous.h
*********************************************************************/
