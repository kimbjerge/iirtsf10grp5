/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: PhysioModel
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/PhysioModel.cpp
*********************************************************************/

//## auto_generated
#include "PhysioModel.h"
//## package Application::Continuous

//## class PhysioModel
float PhysioModel::getECGSample() const {
    return ECGSample;
}

float PhysioModel::getEDRSample() const {
    return EDRSample;
}

float PhysioModel::getPulseSample() const {
    return PulseSample;
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
}

float PhysioModel::int2float(const SampleType& s) {
    //#[ operation int2float(SampleType)
    return s;
    //#]
}

PhysioModel::PhysioModel() {
}

PhysioModel::~PhysioModel() {
    cleanUpRelations();
}

void PhysioModel::setECGSample(float p_ECGSample) {
    ECGSample = p_ECGSample;
}

void PhysioModel::setEDRSample(float p_EDRSample) {
    EDRSample = p_EDRSample;
}

void PhysioModel::setPulseSample(float p_PulseSample) {
    PulseSample = p_PulseSample;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/PhysioModel.cpp
*********************************************************************/
