/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordProxy
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordProxy.cpp
*********************************************************************/

//## auto_generated
#include "RecordProxy.h"
//## operation RecordProxy(RecordWfdb*)
#include "RecordWfdb.h"
//## dependency RecordIterator
#include "RecordIterator.h"
//## package Application::Continuous

//## class RecordProxy
RecordProxy::RecordProxy(RecordWfdb* record) {
    itsRecordWfdb = NULL;
    //#[ operation RecordProxy(RecordWfdb*)
    itsRecordWfdb = record;
    //#]
}

bool RecordProxy::Load() {
    //#[ operation Load()
    return itsRecordWfdb->Load();
    //#]
}

RecordProxy::~RecordProxy() {
    //#[ operation ~RecordProxy()
    delete itsRecordWfdb;
    //#]
    cleanUpRelations();
}

RecordProxy::RecordProxy() {
    itsRecordWfdb = NULL;
}

RecordIterator* RecordProxy::CreateIterator() {
    //#[ operation CreateIterator()
    return new RecordIterator(itsRecordWfdb);
    //#]
}

void RecordProxy::First() {
    //#[ operation First()
    itsRecordWfdb->First();
    //#]
}

void RecordProxy::Next() {
    //#[ operation Next()
    itsRecordWfdb->Next();
    //#]
}

RecordWfdb* RecordProxy::getItsRecordWfdb() const {
    return itsRecordWfdb;
}

void RecordProxy::setItsRecordWfdb(RecordWfdb* p_RecordWfdb) {
    itsRecordWfdb = p_RecordWfdb;
}

void RecordProxy::cleanUpRelations() {
    if(itsRecordWfdb != NULL)
        {
            itsRecordWfdb = NULL;
        }
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordProxy.cpp
*********************************************************************/
