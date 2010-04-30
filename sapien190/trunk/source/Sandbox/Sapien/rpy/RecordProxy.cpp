/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordProxy
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/RecordProxy.cpp
*********************************************************************/

//## dependency RecordFile
#include "RecordFile.h"
//## auto_generated
#include "RecordProxy.h"
//## dependency RecordIterator
#include "RecordIterator.h"
//## package Application::Continuous

//## class RecordProxy
RecordProxy::RecordProxy(RecordFile* file) {
    itsRecordFile = NULL;
    //#[ operation RecordProxy(RecordFile*)
    itsRecordFile = file;
    //#]
}

bool RecordProxy::Load() {
    //#[ operation Load()
    itsRecordFile->Load();
    //#]
}

RecordProxy::~RecordProxy() {
    //#[ operation ~RecordProxy()
    delete itsRecordFile;
    //#]
    cleanUpRelations();
}

RecordProxy::RecordProxy() {
    itsRecordFile = NULL;
}

RecordIterator* RecordProxy::CreateIterator() {
    //#[ operation CreateIterator()
    return new RecordIterator(itsRecordFile);
    //#]
}

void RecordProxy::First() {
    //#[ operation First()
    itsRecordFile->First();
    //#]
}

void RecordProxy::Next() {
    //#[ operation Next()
    itsRecordFile->Next();
    //#]
}

RecordFile* RecordProxy::getItsRecordFile() const {
    return itsRecordFile;
}

void RecordProxy::setItsRecordFile(RecordFile* p_RecordFile) {
    itsRecordFile = p_RecordFile;
}

void RecordProxy::cleanUpRelations() {
    if(itsRecordFile != NULL)
        {
            itsRecordFile = NULL;
        }
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/RecordProxy.cpp
*********************************************************************/
