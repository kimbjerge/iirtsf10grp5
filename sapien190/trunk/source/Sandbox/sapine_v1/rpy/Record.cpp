/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Record
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Record.cpp
*********************************************************************/

//## auto_generated
#include "Record.h"
//## dependency RecordIterator
#include "RecordIterator.h"
//## package Application::Continuous

//## class Record
Record::Record() : endRecord(true) {
}

Record::~Record() {
}

RecordIterator* Record::CreateIterator() {
    //#[ operation CreateIterator()
    return new RecordIterator(this);
    //#]
}

SampleSet* Record::getItsSampleSet() const {
    return (SampleSet*) &itsSampleSet;
}

bool Record::getEndRecord() const {
    return endRecord;
}

void Record::setEndRecord(bool p_endRecord) {
    endRecord = p_endRecord;
}

SampleType Record::getSample() const {
    return sample;
}

void Record::setSample(SampleType p_sample) {
    sample = p_sample;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Record.cpp
*********************************************************************/
