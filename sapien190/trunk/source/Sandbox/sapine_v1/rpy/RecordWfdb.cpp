/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordWfdb
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordWfdb.cpp
*********************************************************************/

//## dependency RecordIterator
#include "RecordIterator.h"
//## auto_generated
#include "RecordWfdb.h"
//## package Application::Continuous

//## class RecordWfdb
RecordWfdb::RecordWfdb(char* filename) {
    //#[ operation RecordWfdb(char*)
    recordName = new char[100];
    strcpy(recordName, filename);
    //#]
}

RecordWfdb::RecordWfdb() {
}

RecordWfdb::~RecordWfdb() {
    //#[ operation ~RecordWfdb()
    delete recordName;
    //#]
}

void RecordWfdb::First() {
    //#[ operation First()
    Next();
    
    //#]
}

bool RecordWfdb::Load() {
    //#[ operation Load()
    #ifdef _LINUX
    WFDB_Siginfo s[2];
    if (isigopen(recordName, s, 2) < 2) 
    {
        std::cout << "Could not read record : " << recordName << std::endl; 
    	return false;
    }
    else 
    #endif
    	return true;
    //#]
}

void RecordWfdb::Next() {
    //#[ operation Next()
    #ifdef _LINUX
    WFDB_Sample v[2];
    
    if (getvec(v) > 0)
    {
    	for (int idx = 0; idx < itsSampleSet.getNum(); idx++)
    		itsSampleSet.SetSample(idx, v[idx]); 
    	endRecord = false;
    }
    else
    	endRecord = true; 
    #endif
    //#]
}

char* RecordWfdb::getRecordName() const {
    return recordName;
}

void RecordWfdb::setRecordName(char* p_recordName) {
    recordName = p_recordName;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordWfdb.cpp
*********************************************************************/
