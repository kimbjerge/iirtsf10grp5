/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: PatientModel
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/PatientModel.cpp
*********************************************************************/

//## dependency ExtInputs
#include "ExtInputs.h"
//## auto_generated
#include "PatientModel.h"
//## operation SetMedicine(Medicine*)
#include "Medicine.h"
//## operation SetStrategy(PhysioModel*)
#include "PhysioModel.h"
//## operation SetRecord(Record*)
#include "Record.h"
//## link itsRecordIterator
#include "RecordIterator.h"
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
    if (itsPhysioModel != NULL)
    	itsPhysioModel->Generate(sample);
    //#]
}

bool PatientModel::SetRecord(Record* aRecord) {
    //#[ operation SetRecord(Record*)
    if (itsRecord != NULL)
    	delete itsRecord;
    setItsRecord(aRecord);
    return aRecord->Load();
    //#]
}

void PatientModel::SetStrategy(PhysioModel* aPhysioModel) {
    //#[ operation SetStrategy(PhysioModel*)
    setItsPhysioModel(aPhysioModel);
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

void PatientModel::SetMedicine(Medicine* aMedicine) {
    //#[ operation SetMedicine(Medicine*)
    setItsMedicine(aMedicine);
    //#]
}

PatientModel::~PatientModel() {
    //#[ operation ~PatientModel()
    if (itsPhysioModel) delete itsPhysioModel;
    if (itsRecord) delete itsRecord;
    if (itsRecordIterator) delete itsRecordIterator;
    //#]
    cleanUpRelations();
}

PatientModel::PatientModel() : sample(0) {
    itsExtInputs = NULL;
    itsMedicine = NULL;
    itsPhysioModel = NULL;
    itsRecord = NULL;
    itsRecordIterator = NULL;
    //#[ operation PatientModel()
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

Medicine* PatientModel::getItsMedicine() const {
    return itsMedicine;
}

void PatientModel::setItsMedicine(Medicine* p_Medicine) {
    itsMedicine = p_Medicine;
}

PhysioModel* PatientModel::getItsPhysioModel() const {
    return itsPhysioModel;
}

void PatientModel::setItsPhysioModel(PhysioModel* p_PhysioModel) {
    itsPhysioModel = p_PhysioModel;
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
    if(itsMedicine != NULL)
        {
            itsMedicine = NULL;
        }
    if(itsPhysioModel != NULL)
        {
            itsPhysioModel = NULL;
        }
    if(itsRecord != NULL)
        {
            itsRecord = NULL;
        }
    if(itsRecordIterator != NULL)
        {
            itsRecordIterator = NULL;
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

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/PatientModel.cpp
*********************************************************************/
