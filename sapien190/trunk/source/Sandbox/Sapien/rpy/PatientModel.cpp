/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: PatientModel
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/PatientModel.cpp
*********************************************************************/

//## dependency ExtInputs
#include "ExtInputs.h"
//## auto_generated
#include "PatientModel.h"
//## link itsExtOutAnalogue
#include "ExtOutAnalogue.h"
//## link itsExtOutDigital
#include "ExtOutDigital.h"
//## operation SetStrategy(Generator*)
#include "Generator.h"
//## link itsPulseUpdater
#include "PulseUpdater.h"
//## operation SetRecord(Record*)
#include "Record.h"
//## link itsRecordIterator
#include "RecordIterator.h"
//## link itsWaveform
#include "Waveform.h"
//## package Application::Continuous

//## class PatientModel
void PatientModel::CalcSample() {
    //#[ operation CalcSample()
    if (itsRecordIterator != NULL)
    {       
    	sample = itsRecordIterator->CurrentItem();
    	if (itsRecordIterator->IsDone())
    		itsRecordIterator->First();
    	else
    		itsRecordIterator->Next();    	
    }
    if (itsGenerator != NULL)
    	itsGenerator->Generate(sample);
    //#]
}

void PatientModel::GenerateSignals() {
    //#[ operation GenerateSignals()
    itsExtOutAnalogue[0]->OutputSample(itsGenerator->getECGSample());
    itsExtOutAnalogue[1]->OutputSample(itsGenerator->getEDRSample());
    //itsExtOutAnalogue[0]->OutputSample(sample);
    
    //#]
}

bool PatientModel::SetRecord(Record* aRecord) {
    //#[ operation SetRecord(Record*)
    setItsRecord(aRecord);
    return aRecord->Load();
    //#]
}

void PatientModel::SetStrategy(Generator* aGenerator) {
    //#[ operation SetStrategy(Generator*)
    setItsGenerator(aGenerator);
    //#]
}

void PatientModel::StartSimulation() {
    //#[ operation StartSimulation()
    if (itsRecord != NULL)
    {      
    	if (itsRecordIterator == NULL)
    		itsRecordIterator = itsRecord->CreateIterator();
    	itsRecordIterator->First();
    }
    //#]
}

void PatientModel::AddMedicine(Medicine* aMedicine) {
    //#[ operation AddMedicine(Medicine*)
    addItsMedicine(aMedicine);
    //#]
}

PatientModel::~PatientModel() {
    //#[ operation ~PatientModel()
    if (itsGenerator) delete itsGenerator;
    if (itsRecord) delete itsRecord;
    if (itsRecordIterator) delete itsRecordIterator;
    delete itsPulseUpdater;
    delete itsExtOutAnalogue[1];
    delete itsExtOutAnalogue[0];
    //#]
    cleanUpRelations();
}

PatientModel::PatientModel() : sample(0) {
    itsExtInputs = NULL;
    {
        for (int pos = 0; pos < 2; pos++) {
        	itsExtOutAnalogue[pos] = NULL;
        }
    }
    itsExtOutDigital = NULL;
    itsGenerator = NULL;
    itsPulseUpdater = NULL;
    itsRecord = NULL;
    itsRecordIterator = NULL;
    itsWaveform = NULL;
    //#[ operation PatientModel()
    itsExtOutAnalogue[0] = new ExtOutAnalogue(1);
    itsExtOutAnalogue[1] = new ExtOutAnalogue(2);
    itsPulseUpdater = new PulseUpdater();
    //#]
}

void PatientModel::GeneratePulse() {
    //#[ operation GeneratePulse()
    itsPulseUpdater->OutputPulse(itsGenerator->getPulseSample());
    //#]
}

SampleType PatientModel::getSample() const {
    return sample;
}

void PatientModel::setSample(SampleType p_sample) {
    sample = p_sample;
}

ExtInputs* PatientModel::getItsExtInputs() const {
    return itsExtInputs;
}

void PatientModel::setItsExtInputs(ExtInputs* p_ExtInputs) {
    if(p_ExtInputs != NULL)
        {
            p_ExtInputs->_setItsPatientModel(this);
        }
    _setItsExtInputs(p_ExtInputs);
}

int PatientModel::getItsExtOutAnalogue() const {
    int iter = 0;
    return iter;
}

void PatientModel::addItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue) {
    for (int pos = 0; pos < 2; pos++) {
    	if (!itsExtOutAnalogue[pos]) {
    		itsExtOutAnalogue[pos] = p_ExtOutAnalogue;
    		break;
    	}
    }
}

void PatientModel::removeItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue) {
    for (int pos = 0; pos < 2; pos++) {
    	if (itsExtOutAnalogue[pos] == p_ExtOutAnalogue) {
    		itsExtOutAnalogue[pos] = NULL;
    	}
    }
}

void PatientModel::clearItsExtOutAnalogue() {
}

ExtOutDigital* PatientModel::getItsExtOutDigital() const {
    return itsExtOutDigital;
}

void PatientModel::setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital) {
    itsExtOutDigital = p_ExtOutDigital;
}

Generator* PatientModel::getItsGenerator() const {
    return itsGenerator;
}

void PatientModel::setItsGenerator(Generator* p_Generator) {
    itsGenerator = p_Generator;
}

std::list<Medicine*>::const_iterator PatientModel::getItsMedicine() const {
    std::list<Medicine*>::const_iterator iter;
    iter = itsMedicine.begin();
    return iter;
}

std::list<Medicine*>::const_iterator PatientModel::getItsMedicineEnd() const {
    return itsMedicine.end();
}

void PatientModel::addItsMedicine(Medicine* p_Medicine) {
    itsMedicine.push_back(p_Medicine);
}

void PatientModel::removeItsMedicine(Medicine* p_Medicine) {
    std::list<Medicine*>::iterator pos = std::find(itsMedicine.begin(), itsMedicine.end(),p_Medicine);
    if (pos != itsMedicine.end()) {
    	itsMedicine.erase(pos);
    }
}

void PatientModel::clearItsMedicine() {
    itsMedicine.clear();
}

PulseUpdater* PatientModel::getItsPulseUpdater() const {
    return itsPulseUpdater;
}

void PatientModel::setItsPulseUpdater(PulseUpdater* p_PulseUpdater) {
    itsPulseUpdater = p_PulseUpdater;
}

Record* PatientModel::getItsRecord() const {
    return itsRecord;
}

void PatientModel::setItsRecord(Record* p_Record) {
    itsRecord = p_Record;
}

RecordIterator* PatientModel::getItsRecordIterator() const {
    return itsRecordIterator;
}

void PatientModel::setItsRecordIterator(RecordIterator* p_RecordIterator) {
    itsRecordIterator = p_RecordIterator;
}

std::list<Signal*>::const_iterator PatientModel::getItsSignal() const {
    std::list<Signal*>::const_iterator iter;
    iter = itsSignal.begin();
    return iter;
}

std::list<Signal*>::const_iterator PatientModel::getItsSignalEnd() const {
    return itsSignal.end();
}

void PatientModel::addItsSignal(Signal* p_Signal) {
    if(p_Signal != NULL)
        {
            p_Signal->_setItsPatientModel(this);
        }
    _addItsSignal(p_Signal);
}

void PatientModel::removeItsSignal(Signal* p_Signal) {
    if(p_Signal != NULL)
        {
            p_Signal->__setItsPatientModel(NULL);
        }
    _removeItsSignal(p_Signal);
}

void PatientModel::clearItsSignal() {
    std::list<Signal*>::const_iterator iter;
    iter = itsSignal.begin();
    while (iter != itsSignal.end()){
        (*iter)->_clearItsPatientModel();
        iter++;
    }
    _clearItsSignal();
}

Waveform* PatientModel::getItsWaveform() const {
    return itsWaveform;
}

void PatientModel::setItsWaveform(Waveform* p_Waveform) {
    if(p_Waveform != NULL)
        {
            p_Waveform->_setItsPatientModel(this);
        }
    _setItsWaveform(p_Waveform);
}

void PatientModel::cleanUpRelations() {
    if(itsExtInputs != NULL)
        {
            PatientModel* p_PatientModel = itsExtInputs->getItsPatientModel();
            if(p_PatientModel != NULL)
                {
                    itsExtInputs->__setItsPatientModel(NULL);
                }
            itsExtInputs = NULL;
        }
    
    if(itsExtOutDigital != NULL)
        {
            itsExtOutDigital = NULL;
        }
    if(itsGenerator != NULL)
        {
            itsGenerator = NULL;
        }
    {
        itsMedicine.clear();
    }
    if(itsPulseUpdater != NULL)
        {
            itsPulseUpdater = NULL;
        }
    if(itsRecord != NULL)
        {
            itsRecord = NULL;
        }
    if(itsRecordIterator != NULL)
        {
            itsRecordIterator = NULL;
        }
    {
        std::list<Signal*>::const_iterator iter;
        iter = itsSignal.begin();
        while (iter != itsSignal.end()){
            PatientModel* p_PatientModel = (*iter)->getItsPatientModel();
            if(p_PatientModel != NULL)
                {
                    (*iter)->__setItsPatientModel(NULL);
                }
            iter++;
        }
        itsSignal.clear();
    }
    if(itsWaveform != NULL)
        {
            PatientModel* p_PatientModel = itsWaveform->getItsPatientModel();
            if(p_PatientModel != NULL)
                {
                    itsWaveform->__setItsPatientModel(NULL);
                }
            itsWaveform = NULL;
        }
}

void PatientModel::__setItsExtInputs(ExtInputs* p_ExtInputs) {
    itsExtInputs = p_ExtInputs;
}

void PatientModel::_setItsExtInputs(ExtInputs* p_ExtInputs) {
    if(itsExtInputs != NULL)
        {
            itsExtInputs->__setItsPatientModel(NULL);
        }
    __setItsExtInputs(p_ExtInputs);
}

void PatientModel::_clearItsExtInputs() {
    itsExtInputs = NULL;
}

void PatientModel::_addItsSignal(Signal* p_Signal) {
    itsSignal.push_back(p_Signal);
}

void PatientModel::_removeItsSignal(Signal* p_Signal) {
    std::list<Signal*>::iterator pos = std::find(itsSignal.begin(), itsSignal.end(),p_Signal);
    if (pos != itsSignal.end()) {
    	itsSignal.erase(pos);
    }
}

void PatientModel::_clearItsSignal() {
    itsSignal.clear();
}

void PatientModel::__setItsWaveform(Waveform* p_Waveform) {
    itsWaveform = p_Waveform;
}

void PatientModel::_setItsWaveform(Waveform* p_Waveform) {
    if(itsWaveform != NULL)
        {
            itsWaveform->__setItsPatientModel(NULL);
        }
    __setItsWaveform(p_Waveform);
}

void PatientModel::_clearItsWaveform() {
    itsWaveform = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/PatientModel.cpp
*********************************************************************/
