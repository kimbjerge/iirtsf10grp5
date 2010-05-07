/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: PhysioModel
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/PhysioModel.cpp
*********************************************************************/

//## auto_generated
#include "PhysioModel.h"
//## operation SetMedicine(Medicine*)
#include "Medicine.h"
//## package Application::Continuous

//## class PhysioModel
SampleSet* PhysioModel::getECGSample() const {
    return (SampleSet*) &ECGSample;
}

SampleSet* PhysioModel::getEDRSample() const {
    return (SampleSet*) &EDRSample;
}

SampleSet* PhysioModel::getPulseSample() const {
    return (SampleSet*) &PulseSample;
}

std::list<Filter*>::const_iterator PhysioModel::getItsFilter() const {
    std::list<Filter*>::const_iterator iter;
    iter = itsFilter.begin();
    return iter;
}

std::list<Filter*>::const_iterator PhysioModel::getItsFilterEnd() const {
    return itsFilter.end();
}

void PhysioModel::addItsFilter(Filter* p_Filter) {
    itsFilter.push_back(p_Filter);
}

void PhysioModel::removeItsFilter(Filter* p_Filter) {
    std::list<Filter*>::iterator pos = std::find(itsFilter.begin(), itsFilter.end(),p_Filter);
    if (pos != itsFilter.end()) {
    	itsFilter.erase(pos);
    }
}

void PhysioModel::clearItsFilter() {
    itsFilter.clear();
}

void PhysioModel::cleanUpRelations() {
    {
        itsFilter.clear();
    }
    if(itsMedicine != NULL)
        {
            itsMedicine = NULL;
        }
}

PhysioModel::~PhysioModel() {
    cleanUpRelations();
}

ECGMedicineAdjust* PhysioModel::getItsECGMedicineAdjust() const {
    return (ECGMedicineAdjust*) &itsECGMedicineAdjust;
}

ECGtoEDR* PhysioModel::getItsECGtoEDR() const {
    return (ECGtoEDR*) &itsECGtoEDR;
}

ECGtoPulse* PhysioModel::getItsECGtoPulse() const {
    return (ECGtoPulse*) &itsECGtoPulse;
}

Gain* PhysioModel::getItsGain() const {
    return (Gain*) &itsGain;
}

PhysioModel::PhysioModel() {
    itsMedicine = NULL;
}

void PhysioModel::SetMedicine(Medicine* aMedicine) {
    //#[ operation SetMedicine(Medicine*)
    setItsMedicine(aMedicine);
    //#]
}

Medicine* PhysioModel::getItsMedicine() const {
    return itsMedicine;
}

void PhysioModel::setItsMedicine(Medicine* p_Medicine) {
    itsMedicine = p_Medicine;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/PhysioModel.cpp
*********************************************************************/
