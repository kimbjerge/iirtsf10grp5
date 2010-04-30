/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Continuous
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: DefaultComponent/DefaultConfig/Continuous.h
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
#include "math.h"
//## auto_generated
#include "Application.h"
//## classInstance itsECGCalculate
class ECGCalculate;

//## classInstance itsEDRCalculate
class EDRCalculate;

//## auto_generated
class Filter;

//## auto_generated
class Generator;

//## auto_generated
class InfECGCalculate;

//## auto_generated
class InfusionGenerator;

//## auto_generated
class Medicine;

//## classInstance itsNormalGenerator
class NormalGenerator;

//## auto_generated
class PatientModel;

//## classInstance itsPulseCalculate
class PulseCalculate;

//## auto_generated
class Record;

//## auto_generated
class RecordFile;

//## auto_generated
class RecordIterator;

//## auto_generated
class RecordProxy;

//## auto_generated
class RecordSimulate;

//## auto_generated
class TestContinous;

//## package Application::Continuous


//## type SampleType
typedef int SampleType;

//## auto_generated
void Continuous_initRelations();

//## classInstance itsECGCalculate
extern ECGCalculate itsECGCalculate;

//## classInstance itsEDRCalculate
extern EDRCalculate itsEDRCalculate;

//## classInstance itsNormalGenerator
extern NormalGenerator itsNormalGenerator;

//## classInstance itsPulseCalculate
extern PulseCalculate itsPulseCalculate;

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Continuous.h
*********************************************************************/
