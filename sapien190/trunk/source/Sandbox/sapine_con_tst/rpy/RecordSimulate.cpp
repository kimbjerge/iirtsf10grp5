/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordSimulate
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordSimulate.cpp
*********************************************************************/

//## dependency RecordIterator
#include "RecordIterator.h"
//## auto_generated
#include "RecordSimulate.h"
//## package Application::Continuous

//## class RecordSimulate
RecordSimulate::RecordSimulate() {
}

RecordSimulate::~RecordSimulate() {
}

void RecordSimulate::First() {
    //#[ operation First()
    SetRandom();
    endRecord = false;
    //#]
}

bool RecordSimulate::Load() {
    //#[ operation Load()
    return true;
    //#]
}

void RecordSimulate::Next() {
    //#[ operation Next()
    SetRandom();
    endRecord = false;
    
    //#]
}

void RecordSimulate::SetRandom() {
    //#[ operation SetRandom()
    WFDB_Sample sample = rand()%500;
    for (int idx = 0; idx < itsSampleSet.getNum(); idx++)
    	itsSampleSet.SetSample(idx, sample);    
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordSimulate.cpp
*********************************************************************/
