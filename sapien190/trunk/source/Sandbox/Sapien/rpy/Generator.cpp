/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Generator
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Generator.cpp
*********************************************************************/

//## auto_generated
#include "Generator.h"
//## package Application::Continuous

//## class Generator
Generator::Generator() {
}

Generator::~Generator() {
    cleanUpRelations();
}

float Generator::getECGSample() const {
    return ECGSample;
}

float Generator::getEDRSample() const {
    return EDRSample;
}

float Generator::getPulseSample() const {
    return PulseSample;
}

std::list<Filter*>::const_iterator Generator::getItsFilter() const {
    std::list<Filter*>::const_iterator iter;
    iter = itsFilter.begin();
    return iter;
}

std::list<Filter*>::const_iterator Generator::getItsFilterEnd() const {
    return itsFilter.end();
}

void Generator::addItsFilter(Filter* p_Filter) {
    itsFilter.push_back(p_Filter);
}

void Generator::removeItsFilter(Filter* p_Filter) {
    std::list<Filter*>::iterator pos = std::find(itsFilter.begin(), itsFilter.end(),p_Filter);
    if (pos != itsFilter.end()) {
    	itsFilter.erase(pos);
    }
}

void Generator::clearItsFilter() {
    itsFilter.clear();
}

void Generator::cleanUpRelations() {
    {
        itsFilter.clear();
    }
}

float Generator::int2float(const SampleType& s) {
    //#[ operation int2float(SampleType)
    return s;
    //#]
}

void Generator::setECGSample(float p_ECGSample) {
    ECGSample = p_ECGSample;
}

void Generator::setEDRSample(float p_EDRSample) {
    EDRSample = p_EDRSample;
}

void Generator::setPulseSample(float p_PulseSample) {
    PulseSample = p_PulseSample;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Generator.cpp
*********************************************************************/
