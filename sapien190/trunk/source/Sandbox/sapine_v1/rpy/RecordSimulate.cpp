/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordSimulate
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/RecordSimulate.cpp
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
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/RecordSimulate.cpp
*********************************************************************/
