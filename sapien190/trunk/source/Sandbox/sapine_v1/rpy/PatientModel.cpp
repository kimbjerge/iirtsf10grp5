/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: PatientModel
//!	Generated Date	: Fri, 21, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/PatientModel.cpp
*********************************************************************/

//## dependency ExtInputs
#include "ExtInputs.h"
//## auto_generated
#include "PatientModel.h"
//## operation SetMedicine(Medicine*)
#include "Medicine.h"
//## operation SetStrategy(PhysioModel*)
#include "PhysioModel.h"
//## operation AlternateRecord(Record*)
#include "Record.h"
//## link itsRecordIterator
#include "RecordIterator.h"
//## link itsSampleSet
#include "SampleSet.h"
//## link itsIPumpProtocol
#include "IPumpProtocol.h"
//## operation ProtocolChanged(ProtocolColleague*)
#include "ProtocolColleague.h"
//## package Application::Continuous

//## class PatientModel
void PatientModel::CalcSample() {
    //#[ operation CalcSample()
    if (itsRecordIterator != NULL)
    {   
    	enter();    
    	itsSampleSet = itsRecordIterator->CurrentItem();
    	if (itsRecordIterator->IsDone())
    		itsRecordIterator->First();
    	else
    		itsRecordIterator->Next();    
    			
        if (itsPhysioModel != NULL)
       		itsPhysioModel->Generate(*itsSampleSet);
       	exit();
    }
    //#]
}

bool PatientModel::SetRecord(Record* aRecord) {
    //#[ operation SetRecord(Record*)
    if (aRecord->Load()) {
    	setItsRecord(aRecord);
    	return true;
    }
    return false;
    //#]
}

void PatientModel::SetStrategy(PhysioModel* aPhysioModel) {
    //#[ operation SetStrategy(PhysioModel*)
    if (itsPhysioModel != NULL) delete itsPhysioModel;
    setItsPhysioModel(aPhysioModel);
    //#]
}

void PatientModel::StartSimulation() {
    //#[ operation StartSimulation()
    if (itsRecord != NULL)
    {      
    	if (itsRecordIterator != NULL) delete itsRecordIterator;
    	setItsRecordIterator(itsRecord->CreateIterator());
    	itsRecordIterator->First();
    }
    //#]
}

void PatientModel::SetMedicine(Medicine* aMedicine) {
    //#[ operation SetMedicine(Medicine*)
    Medicine* oldMedicine = getItsMedicine();
    setItsMedicine(aMedicine);
    if (itsPhysioModel)
    	itsPhysioModel->SetMedicine(aMedicine); 
    if (oldMedicine != NULL) delete oldMedicine;
    //#]
}

PatientModel::~PatientModel() {
    //#[ operation ~PatientModel()
    if (itsPhysioModel) delete itsPhysioModel;
    if (itsRecordIterator) delete itsRecordIterator;
    if (itsMedicine) delete itsMedicine;
    //#]
    cleanUpRelations();
}

PatientModel::PatientModel() : pause(false) {
    itsIPumpProtocol = NULL;
    itsMedicine = NULL;
    itsPhysioModel = NULL;
    itsRecord = NULL;
    itsRecordIterator = NULL;
    itsSampleSet = NULL;
    //#[ operation PatientModel()
    //#]
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
    if(itsIPumpProtocol != NULL)
        {
            itsIPumpProtocol = NULL;
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
    if(itsSampleSet != NULL)
        {
            itsSampleSet = NULL;
        }
}

SampleSet* PatientModel::getItsSampleSet() const {
    return itsSampleSet;
}

void PatientModel::setItsSampleSet(SampleSet* p_SampleSet) {
    itsSampleSet = p_SampleSet;
}

WFDB_Sample PatientModel::GetECGValue(int idx) {
    //#[ operation GetECGValue(int)
    return itsPhysioModel->getECGSample()->GetSample(idx)->getValue();
    //#]
}

WFDB_Sample PatientModel::GetEDRValue(int idx) {
    //#[ operation GetEDRValue(int)
    return itsPhysioModel->getEDRSample()->GetSample(idx)->getValue();
    //#]
}

int PatientModel::GetPulse() {
    //#[ operation GetPulse()
    return itsPhysioModel->getPulseSample()->GetSample(0)->getValue();
    //#]
}

bool PatientModel::getPause() const {
    return pause;
}

void PatientModel::setPause(bool p_pause) {
    pause = p_pause;
}

bool PatientModel::AlternateRecord(Record* aRecord) {
    //#[ operation AlternateRecord(Record*)
    if (aRecord->Load()) {
    	enter();
    	setItsRecord(aRecord);
    	StartSimulation();
    	exit();
    	return true;
    }
    return false;
    //#]
}

void PatientModel::ProtocolChanged(ProtocolColleague* protocol) {
    //#[ operation ProtocolChanged(ProtocolColleague*)
    if (protocol == itsIPumpProtocol)
    {
    	if ((itsMedicine!= NULL) and
    		(itsMedicine->getType() == itsIPumpProtocol->getType()))
      		itsMedicine->setAmount(itsIPumpProtocol->getAmount());
    }
    //#]
}

IPumpProtocol* PatientModel::getItsIPumpProtocol() const {
    return itsIPumpProtocol;
}

void PatientModel::setItsIPumpProtocol(IPumpProtocol* p_IPumpProtocol) {
    itsIPumpProtocol = p_IPumpProtocol;
}

void PatientModel::CreateProtocols() {
    //#[ operation CreateProtocols()
    itsIPumpProtocol = new IPumpProtocol(this);
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/PatientModel.cpp
*********************************************************************/
