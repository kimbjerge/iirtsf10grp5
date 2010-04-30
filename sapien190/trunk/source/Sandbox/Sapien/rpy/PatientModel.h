/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PatientModel
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: DefaultComponent/DefaultConfig/PatientModel.h
*********************************************************************/

#ifndef PatientModel_H
#define PatientModel_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

////    Friends    ////

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Relations and components    ////

////    Friends    ////

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Relations and components    ////

////    Framework operations    ////

////    Friends    ////

////    Constructors and destructors    ////

////    Operations    ////

//## dependency list
#include "list"
//## dependency iterator
#include "iterator"
//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "math.h"
//## auto_generated
#include "Continuous.h"
//## auto_generated
#include <list>
//## auto_generated
#include <iterator>
//## link itsMedicine
#include "Medicine.h"
//## link itsSignal
#include "Signal.h"
//## dependency ExtInputs
class ExtInputs;

//## link itsExtOutAnalogue
class ExtOutAnalogue;

//## link itsExtOutDigital
class ExtOutDigital;

//## operation SetStrategy(Generator*)
class Generator;

//## link itsPulseUpdater
class PulseUpdater;

//## operation SetRecord(Record*)
class Record;

//## link itsRecordIterator
class RecordIterator;

//## link itsWaveform
class Waveform;

//## package Application::Continuous

//## class PatientModel
class PatientModel {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation CalcSample()
    void CalcSample();
    
    //## operation GenerateSignals()
    void GenerateSignals();
    
    //## operation SetRecord(Record*)
    bool SetRecord(Record* aRecord);
    
    //## operation SetStrategy(Generator*)
    void SetStrategy(Generator* aGenerator);
    
    //## operation StartSimulation()
    void StartSimulation();
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////

protected :

    ExtInputs* itsExtInputs;		//## link itsExtInputs
    
    ExtOutAnalogue* itsExtOutAnalogue[2];		//## link itsExtOutAnalogue
    
    ExtOutDigital* itsExtOutDigital;		//## link itsExtOutDigital
    
    Generator* itsGenerator;		//## link itsGenerator
    
    std::list<Medicine*> itsMedicine;		//## link itsMedicine
    
    PulseUpdater* itsPulseUpdater;		//## link itsPulseUpdater
    
    Record* itsRecord;		//## link itsRecord
    
    std::list<Signal*> itsSignal;		//## link itsSignal
    
    Waveform* itsWaveform;		//## link itsWaveform
    
    ////    Framework operations    ////
    
    SampleType sample;		//## attribute sample
    
    RecordIterator* itsRecordIterator;		//## link itsRecordIterator

public :

    //## operation AddMedicine(Medicine*)
    void AddMedicine(Medicine* aMedicine);
    
    //## operation ~PatientModel()
    ~PatientModel();
    
    //## operation PatientModel()
    PatientModel();
    
    //## operation GeneratePulse()
    void GeneratePulse();
    
    //## auto_generated
    SampleType getSample() const;
    
    //## auto_generated
    void setSample(SampleType p_sample);
    
    //## auto_generated
    ExtInputs* getItsExtInputs() const;
    
    //## auto_generated
    void setItsExtInputs(ExtInputs* p_ExtInputs);
    
    //## auto_generated
    int getItsExtOutAnalogue() const;
    
    //## auto_generated
    void addItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue);
    
    //## auto_generated
    void removeItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue);
    
    //## auto_generated
    void clearItsExtOutAnalogue();
    
    //## auto_generated
    ExtOutDigital* getItsExtOutDigital() const;
    
    //## auto_generated
    void setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital);
    
    //## auto_generated
    Generator* getItsGenerator() const;
    
    //## auto_generated
    void setItsGenerator(Generator* p_Generator);
    
    //## auto_generated
    std::list<Medicine*>::const_iterator getItsMedicine() const;
    
    //## auto_generated
    std::list<Medicine*>::const_iterator getItsMedicineEnd() const;
    
    //## auto_generated
    void addItsMedicine(Medicine* p_Medicine);
    
    //## auto_generated
    void removeItsMedicine(Medicine* p_Medicine);
    
    //## auto_generated
    void clearItsMedicine();
    
    //## auto_generated
    PulseUpdater* getItsPulseUpdater() const;
    
    //## auto_generated
    void setItsPulseUpdater(PulseUpdater* p_PulseUpdater);
    
    //## auto_generated
    Record* getItsRecord() const;
    
    //## auto_generated
    void setItsRecord(Record* p_Record);
    
    //## auto_generated
    RecordIterator* getItsRecordIterator() const;
    
    //## auto_generated
    void setItsRecordIterator(RecordIterator* p_RecordIterator);
    
    //## auto_generated
    std::list<Signal*>::const_iterator getItsSignal() const;
    
    //## auto_generated
    std::list<Signal*>::const_iterator getItsSignalEnd() const;
    
    //## auto_generated
    void addItsSignal(Signal* p_Signal);
    
    //## auto_generated
    void removeItsSignal(Signal* p_Signal);
    
    //## auto_generated
    void clearItsSignal();
    
    //## auto_generated
    Waveform* getItsWaveform() const;
    
    //## auto_generated
    void setItsWaveform(Waveform* p_Waveform);

protected :

    //## auto_generated
    void cleanUpRelations();

public :

    //## auto_generated
    void __setItsExtInputs(ExtInputs* p_ExtInputs);
    
    //## auto_generated
    void _setItsExtInputs(ExtInputs* p_ExtInputs);
    
    //## auto_generated
    void _clearItsExtInputs();
    
    //## auto_generated
    void _addItsSignal(Signal* p_Signal);
    
    //## auto_generated
    void _removeItsSignal(Signal* p_Signal);
    
    //## auto_generated
    void _clearItsSignal();
    
    //## auto_generated
    void __setItsWaveform(Waveform* p_Waveform);
    
    //## auto_generated
    void _setItsWaveform(Waveform* p_Waveform);
    
    //## auto_generated
    void _clearItsWaveform();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/PatientModel.h
*********************************************************************/
