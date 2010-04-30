/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordSimulate
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/RecordSimulate.cpp
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
    sample = Random();
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
    sample = Random();
    endRecord = false;
    
    //#]
}

SampleType RecordSimulate::Random() {
    //#[ operation Random()
    return rand() % 1000;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/RecordSimulate.cpp
*********************************************************************/
