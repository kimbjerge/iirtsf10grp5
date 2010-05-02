/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordIterator
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/RecordIterator.cpp
*********************************************************************/

//## auto_generated
#include "RecordIterator.h"
//## package Application::Continuous

//## class RecordIterator
RecordIterator::RecordIterator(Record* rec) {
    itsRecord = NULL;
    //#[ operation RecordIterator(Record*)
    itsRecord = rec;
    //#]
}

SampleType RecordIterator::CurrentItem() {
    //#[ operation CurrentItem()
    return itsRecord->getSample();
    //#]
}

void RecordIterator::First() {
    //#[ operation First()
    itsRecord->First();
    //#]
}

bool RecordIterator::IsDone() {
    //#[ operation IsDone()
    return itsRecord->getEndRecord();
    //#]
}

void RecordIterator::Next() {
    //#[ operation Next()
    itsRecord->Next();
    //#]
}

RecordIterator::RecordIterator() {
    itsRecord = NULL;
}

RecordIterator::~RecordIterator() {
    cleanUpRelations();
}

Record* RecordIterator::getItsRecord() const {
    return itsRecord;
}

void RecordIterator::setItsRecord(Record* p_Record) {
    itsRecord = p_Record;
}

void RecordIterator::cleanUpRelations() {
    if(itsRecord != NULL)
        {
            itsRecord = NULL;
        }
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/RecordIterator.cpp
*********************************************************************/