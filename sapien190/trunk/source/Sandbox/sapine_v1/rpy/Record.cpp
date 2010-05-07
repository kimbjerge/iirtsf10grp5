/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Record
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Record.cpp
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

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Record.cpp
*********************************************************************/
